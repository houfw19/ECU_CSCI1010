// Walid Houf
// CSCI 1010 Section 001
// Lab 11
// The amount of digits

#include<iostream>

using namespace std ;

int main ()
{

    int n, t ;
    int digit = 0 ;

    cout << "\nEnter an integer: " ; 
    cin >> n ; // user input

    t = n ; // assignment to t

    do // run while t is not 0
    {

        digit ++ ; // the post value of the amount of digits

        t /= 10 ; // dividing t by 10 to get how many digits is in the set

    }while ( t != 0 ) ;

    cout << "The number of digits is: " << digit << endl ;

}