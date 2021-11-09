// Walid Houf
// CSCI 1010 Section 001
// Assignment 5
// Pi or 3.14

#include<iostream>

using namespace std;

int main()

{

double pi, s = 0 ;

    for(int i = 1 ; i <= 99 ; i++)
    {  

        if( ( i % 2 ) == 0 )
            s = s - 1.0 / (double) (2 * i - 1) ; // I got a lot of help with this program, I honestly had a really rough time with it

        else
            s = s + 1.0 / (double) (2 * i - 1) ;

    }

        pi = 4 * s ;

        cout << pi ;

return 0 ;

}