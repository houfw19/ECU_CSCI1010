// Walid Houf
// CSCI 1010 Section 001
// Assignment 4, Question 2
// Greater than, less than, or equal to

#include<iostream>

using namespace std ;

int main ()
{

    int a, b;

    cout << "Please enter two integers : " ;
    cin >> a >> b ; // the two intergers that will be compared
    
    if (a > b) // if a is larger than b then stop here
    {
        cout << a << " is greater than " << b << endl ;
    }
    
    else if (a < b) // if a is less than b then stop here
    {
        cout << a << " is less than " << b << endl ;
    }

    else if (a = b) // if a is equal to b stop here
    {
        cout << a << " is equal to " << b << endl ;
    }
}