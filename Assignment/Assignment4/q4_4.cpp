// Walid Houf
// CSCI 1010 Section 001
// Assignment 4, Question 2
// Leap year or not?

#include<iostream>

using namespace std ;

int main ()
{

    int year ;

    cout << "Please enter a year : " ;
    cin >> year ;

    if ( year % 4 == 0 && year % 100 == 0 && year % 400 == 0 ) // this is the expression to show if the year is divisible by these numbers than it is a leap year
    {
        cout << "It is a leap year. \n" ;
    }

    else // if it is not divisible by these numbers then it is not a leap year
    {
        cout << "It is not a leap year. \n" ;
    }

}