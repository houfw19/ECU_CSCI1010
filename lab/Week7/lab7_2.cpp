// Walid Houf
// CSCI 1010 Section 001
// Lab Week 7
// Is this number one, two, or three digits?

#include<iostream>

using namespace std ;

int main ()

{

    int num ; // only one number is being evaluated, and it will be provided by the user

    cout << "\nEnter a number, no more than 4 digits: " ;
    cin >> num ;

    if ( num >= 0 && num < 9 ) // all positive single digits
    {
        cout << " \none digit\n" ;
    }
    
    else if ( num >= 10 && num < 99 ) // all positive double digits
    {
        cout << "\ntwo digit\n" ;
    }

    else // all positive triple digits 
    {
        cout << "\nthree digit\n" ;
    }

}