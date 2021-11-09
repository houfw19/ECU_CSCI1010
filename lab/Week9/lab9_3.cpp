// Walid Houf
// CSCI 1010 Section 001
// Lab 9
// The smallest of 3 numbers 

#include<iostream>

using namespace std ;

int main ()

{

    int a, b, c ;

    cout << "\nPlease enter three numbers: " ;
    cin >> a >> b >> c ;

    if ((a < b) && (a < c))
    {
        cout << "\nThe smallest number is: " << a << endl ;
    }

    else if ((b < a) && (b < c))
    {
        cout << "\nThe smallest number is: " << b << endl ;
    }

    else if ((c < a) && (c < b)) 
    {
        cout << "\nThe smallest number is: " << c << endl ;
    }

    else 
    {
        cout << "\nAll numbers are even." << endl ;
    }

}