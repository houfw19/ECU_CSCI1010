// Walid Houf
// CSCI 1010 Section 001
// Assignment 5
// Hailstone Sequence

#include<iostream>

using namespace std ;

int main ()
{

    int m, n, l, t;

    cout << "Enter an integer: " ;
    cin >> n ;
    cout << n ;
    
    t = n ;
    m = n ;

    while( t != 1 )
    {
        if( t % 2 == 0 )

            t = t / 2 ;

        else

            t  = 3 * t + 1;

        if(t > m)

            m = t;

        l++;

        cout<< ", " << t ;

    }

    cout << "\n" ;

    return 0 ;

}    