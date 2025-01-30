#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    while (true)
    {
        year++;
        int frt = year % 10;
        int trd = (year / 10) % 10;
        int snd = (year / 100) % 10;
        int fst = (year / 1000) % 10;

        if (fst != snd && snd != trd && trd != frt && fst != trd && fst != frt && snd != frt)
        {
            break;
        }
    }

    cout << year;

    cout << endl;

    return 0;
}
