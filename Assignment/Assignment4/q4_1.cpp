// Walid Houf
// CSCI 1010 Section 001
// Assignment 4, Question 2
// Vowel or not?

#include<iostream>

using namespace std ;

int main ()
{

    int Vowel ;
    char c ; // a chosen charachter to represent the letter being used
    

    cout << "Enter the a letter (lowercase).\n" ;
    cin >> c ;
    
    Vowel = (c == 'a' || c == 'e' || c == 'I' || c == 'O' || c == 'u') ; // assigning showing which values are vowels

    if (c = Vowel) // if the entered value is a vowel the if statement stops here
    {
        cout << "The letter is a vowel.\n" << endl ;
    }

    else // if not it will stop here
    {
        cout << "The letter is not a vowel.\n" << endl ;
    }

}