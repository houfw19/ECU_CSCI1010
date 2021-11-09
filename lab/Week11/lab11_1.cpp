// Walid Houf
// CSCI 1010 Section 001
// Lab 11
// The smallest of

#include<iostream>

using namespace std ;

int main ()
{

    int min = 1, n, i ;

    cout << "\nEnter 10 numbers: " ;

    for (i = 0; i < 10; i++) // i is 1, and i is less than 10, then goinging into the expression.
    {
        cin >> n ; // user enters number

        if ((n < min) || (i == 0)) // if the number is less than the most recently found minimum, or i is 0 (next comment)
        {
            min = n ; // then n is min
        }
    }

    cout << "The smallest number is: " << min << endl ;

}