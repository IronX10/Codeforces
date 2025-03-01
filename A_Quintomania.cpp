// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         bool result = true;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (a[i + 1] - a[i] != 5 || a[i + 1] - a[i] != 7)
//             {
//                 result = false;
//             }
//         }
//         if (result)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }

//         cout << endl;
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

#define PATH "path=" // just a constant string
#define DELIM ":"    // just a constant string

typedef void (*sighandler_t)(int);
char *cwdtemp = " ";
int false = 0;

/*structure of functions*/

char *readLine(char *line, size_t len);
void split(char *input, char *argv[]);
int checkpipe(char *input);
void run(char *argv[]);
void runPipe(char *argv[], char *argv2[]);
void setPath(char *inputLine);
char *getPath();
void changedir(char *dir);
char *strcasestr(const char *haystack, const char *needle);
void handle_signal(int signo);

int main()
{
    char *input = NULL; // string to save user input
    char *input2;       // string to save the 2nd command if theres a pipe
    char *argv[50];     // array to sabe the user input after spliting by spaces
    char *argv2[30];    // array to save the second command if thrs a pipe
    char argv3[100];    // array for the use of getcwd function
    int i;              // varibale to save the index of the pipe
    char *cwd;          // variable to save the current working directory

    while (1)
    { // infinite while loop

        signal(SIGINT, SIG_IGN);       // capture teh signal and ignore its default action
        signal(SIGINT, handle_signal); // capture the signal and parse it to handle signal function

        cwd = getcwd(argv3, 100);   // get the current working directory and save it to cwd
        cwdtemp = cwd;              // save current directory as string to cwdtemp
        printf("%s", cwd);          // print cwd
        printf(":~mosh:~$ ");       // show a prompt
        input = readLine(input, 0); // read the user input and save it as a string(char array)

        if (strcasestr(input, PATH) == input)
        {                   // strcasesrt function will check user input and see if it has "path="(substring matching)
            setPath(input); // pass user input to setpath function
        }
        else
        {
            i = checkpipe(input); // saves the index of the ' | ' charactor in user input string
            if (i == 0)
            {                       // if theres no  pipe
                split(input, argv); // split the user input by spaces and save them in argv array
                if (argv[0] == NULL)
                { // if user input is null continue the loop
                    continue;
                }

                /* exit this shell when "exit" is inputed */
                if (strcmp(argv[0], "exit") == 0)
                {
                    exit(0);
                }

                if (strcmp(argv[0], "cd") == 0)
                {                       // if the user entered cd command(its not found in /bin)
                    changedir(argv[1]); // pass the name of the directory that should be changed to the changedir function
                }

                run(argv); // pass argv array to run function
                /*checks if the command is valid*/
                if (false == -1)
                {
                    if (strcmp(argv[0], "exit") == 0)
                    {
                    }
                    else if (strcmp(argv[0], "cd") == 0)
                    {
                    }
                    else
                    {
                        printf("no such mosh command\n");
                    }

                    false = 0;
                }
            }

            else
            {                           // if thers a pipe
                input2 = &input[i + 1]; // points input2 to the memory location of the charactor after charactor '|'
                input[i] = '\0';        // adds the escape charatctor to the charactor before '|' charactor of the input and signal the end of input string
                split(input, argv);     // split input by spaces and save in argv array
                split(input2, argv2);   // split input2 by spaces and save in argv2 array

                if (fork())
                {               // creates a child process
                    wait(NULL); // wait till the child process terminates
                }

                else
                { // else execute the pipe in parent process
                    runPipe(argv, argv2);
                }
            }
        }
    }
}

/*split the input by space and fill to the given array*/
void split(char *input, char *argv[])
{
    char *p; // char array
    int argc;
    argc = 0;
    p = strtok(input, " "); // torkanize user input by spaces and save to p

    while (p != NULL)
    { // until thrs charactors in p
        argv[argc] = p;
        argc++;
        p = strtok(NULL, " "); // points the torkanizer to the point where it stoped before and torkanize p
    }
    argv[argc] = '\0'; // adds end of string to the last index of argv
}

/* read a line */
char *readLine(char *line, size_t len)
{
    getline(&line, &len, stdin);
    *(line + strlen(line) - 1) = '\0';
    return line;
}

/*return the array index of | character if any, otherwise 0*/
int checkpipe(char *input)
{
    int i = 0;
    int returnvalue = 0;
    for (; i < strlen(input); i++)
    {
        if (input[i] == '|')
        { // find the index where '|' in userinput and retuen the index ,if not found return 0
            returnvalue = i;
            break;
        }
    }
    return returnvalue;
}

/*execute a command without | in another process*/
void run(char *argv[])
{
    pid_t pid = fork(); // creats a fork and save its pid in pid variable
    if (pid == -1)
    {
        perror("fork");
        exit(1);
    }
    else if (pid == 0)
    {                                  // if child process was created successfully
        false = execvp(argv[0], argv); // execute the command by execcvp function
        // exit(0);
    }
    else
    {
        wait(NULL); // wait till child process terminates
    }
}

/*execute a command with a | in two processes*/
void runPipe(char *argv[], char *argv2[])
{
    int pfds[2]; // int array to be used in file descriptors
    pipe(pfds);  // creates the pipe
    int stdin_bak = dup(0);
    if (fork() == 0)
    {                   // if the creation of fork successfull
        close(1);       // close current stdout
        dup(pfds[1]);   // duplicate stdout to the write end of the pipe
        close(pfds[0]); // close stdin
        printf("i'm child\n");
        execvp(argv[0], argv); // execute teh command
        exit(0);
    }
    else
    {                            // else in parent
        close(0);                // close current stdin
        dup(pfds[0]);            // duplicate stdin to the read end of the pipe
        close(pfds[1]);          // close stdout
        wait(NULL);              // wait till child process terminates
        execvp(argv2[0], argv2); // execute command
    }
}

/*add a given path to the environmental variable PATH*/
void setPath(char *inputLine)
{
    char *pathIn = &inputLine[strlen(PATH)]; // save the input path that was given by user(without path=)
    char *oldPath = getenv("PATH");          // get the current path from getenv function and save to oldpath
    int lenPath = strlen(oldPath) + strlen(pathIn) + 1 + 1;
    char *pathOut = malloc(sizeof(char) * lenPath); // allocate memoery to pathout by malloc
    strcat(pathOut, oldPath);                       // combine oldpath and pathout and save to pathout by strcat function
    strcat(pathOut, DELIM);                         // combine oldpath and DELIM(constant string) and save to pathout
    strcat(pathOut, pathIn);                        // combine oldpath and pathinand save to pathout
    pathOut[lenPath - 1] = '\0';
    setenv("PATH", pathOut, 1); // set the new path by setenv function
    free(pathOut);              // free the memory allocated by malloc
}

/*change directory if possible*/
void changedir(char *dir)
{
    if (dir == '\0')
    {                    // if user entered nothing after cd
        chdir("/home/"); // change to home
    }
    else
    {
        if (chdir(dir) == -1)
        { // if chdir function returned error
            printf("%s:Cannot find the directory\n", dir);
        }
    }
}

void handle_signal(int signo)
{
    printf("\n");
    printf("%s", cwdtemp);
    printf(":~mosh:~$ ");
    fflush(stdout); // flush the stdout or printf will be in sameline
}