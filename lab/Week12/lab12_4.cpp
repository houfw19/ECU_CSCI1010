// Walid Houf
// CSCI 1010 Section 001
// Lab Week 12 - Question 4
// Harmonic numbers

#include<iostream>

using namespace std ;

int main()
{

    double a[20] ;
    int i ;

    a[0] = 1.0 ; // the first three values will be used to make the for loops
    a[1] = a[0] + 1.0 / 2 ;
    a[2] = a[1] + 1.0 / 3 ;

    cout << a[0] << " " << a[1] << " " << a[2] << " " ; // outputting the three values so they will be shown in the same line

    for (i = 3; i < 20; i++) // starting from the fourth value since the first three were used, up to 20.
    {
        a[i] = a[i-1] + 1.0/(i+1) ; // the harmonic number formula, which takes the previous value and adds 1.0 / i + 1 (Ex. [1.0 / 4] ) 
        cout << a[i] << " " ; // outputting all the values found after the first three
    }

    return 0 ;

}