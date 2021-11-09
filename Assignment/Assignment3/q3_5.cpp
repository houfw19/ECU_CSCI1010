// Walid Houf
// CSCI 1010 Section 001
// Assignment 3
// Seconds to Time

#include <iostream>

using namespace std;

int main ()
{
    int sec;
    int a, b, c, d;

    cout << "enter a num of sec: ";
    cin >> sec;

        a = sec / 3600;
        b = sec % 3600;

    cout << a;
    cout << " hours";
    cout << endl;

        c = b / 60;

    cout << c;
    cout << " minutes";
    cout << endl;

        d = b % 60;

    cout << d;
    cout << " seconds";

    return 0;
}