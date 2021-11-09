// Walid Houf
// CSCI 1010 Section 001
// Assignment 4, Question 2
// Grade == Phrase

#include<iostream>

using namespace std ;

int main ()
{
    int Info ;
    char c ;

    cout << "Enter a letter grade (uppercase) : " ; 
    cin >> c ; // the letter grade of the user is entered

    if (c == 'A') // depending on the grade a corresponding statement will be slected, for example this is for an A
        { 
        cout << "Excellent\n" << endl ; // the output or information provided will be displayed here, which for an A is excellent
        }

    else if (c == 'B')
        {
        cout << "Good\n" << endl ;
        }

    else if (c == 'C')
        {
        cout << "Average\n" << endl ;
        }

    else if (c = 'D')
        {
        cout << "Poor\n" << endl ;
        }

    else if (c = 'F')
        {
        cout << "Failing\n" << endl ;
        }
    else
        {
        cout << "You enter the wrong letter!\n" ; // if any other letter is input besides A, B, C, D, or F then this will be the output
        }
}