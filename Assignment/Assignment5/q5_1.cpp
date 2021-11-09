// Walid Houf
// CSCI 1010 Section 001
// Assignment 5
// Adding only the evens

#include<iostream>

using namespace std ;

int main ()

{

    int num ;
    int sum = 0 ;


    cout << " \nPlease enter a series of numbers (ended by 0): " ;
    cin >> num ;

    while (num != 0)
    {
        if (( num % 2 ) == 0)
        {

            sum += num ;
            cin >> num ;

        }

        else
        {

            cin >> num ;

        }
    }
    cout << "\nThe sum of the even numbers is: " << sum << endl ; 

}