// Walid Houf
// CSCI 1010 Section 001
// Assignment 
// To find the amount of different USD bills

#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
    int Total;
    int t20, t10, t5, t1 ;

    //Total = 20 + 10 + 5 + 1 ;
    
    cout << " Enter a number of U.S. dollar: \n" ;
    cin >> Total ; 

    t20 = Total / 20 ;
    t10 = (Total % 20) / 10 ;
    t5 = (Total % 10) / 5 ;
    t1 = (Total % 5) /1 ;

    cout << "number of 20 bills : " << t20 << endl ;
    cout << "number of 10 bills : " << t10 << endl ;
    cout << "number of 5 bills : " << t5 << endl ;
    cout << "number of 1 bills : " << t1 << endl ;

}
