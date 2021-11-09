// Walid Houf
// CSCI 1010 Section 001
// Assignment 
// Find the date of the week

#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
    int d;
    int m;
    int y;
    int d0;
    int m0;
    int y0;
    int x;

        // y0 = y - ( 14 - m ) / 12 ;
        //  x = y0 + y0 / 4 - y0 / 100 + y0 / 400 ;
        // m0 = m + 12 * (( 14 - m ) / 12 ) - 2 ;
        // d0 = ( d + x ( 31 * m0 ) / 12) % 7 ;

    cout << "Please enter a four digit number for year : " ;
    cin >> y ;
    cout << "Please enter a number for month, use 1 to 12 to represent Jan to Dec : " ;
    cin >> m ;
    cout << "Please enter a number for date, 1 to 31 : ";
    cin >> d ;

    y0 = y - ( 14 - m ) / 12 ;
    x = y0 + y0 / 4 - y0 / 100 + y0 / 400 ;
    m0 = m + 12 * (( 14 - m ) / 12 ) - 2 ;
    d0 = ( d + x * ( 31 * m0 ) / 12) % 7 ;

    cout << "The date of the week is : " << d0 << endl ;  

}