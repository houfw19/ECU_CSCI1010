// Walid Houf
// CSCI 1010 Section 001
// Assignment 4, Question 2
// Tax Per Income

#include<iostream>

using namespace std ;

int main ()
{

    int income ;
    double tax ;

    cout << "Enter income : " ;
    cin >> income ; // the income that will be used

    if (income < 750) // if the income is less than 750 then the statement will stop here
    {
        tax = income * 0.01 ; // the tax rate for the income
        cout << "\nThe tax due is : " << tax << endl ;
    }

    else if (income >=750 && income < 2250) //if less than 2250 yet more than or equal to 750 
    {
        tax = 7.5 + (income - 750) * 0.02 ; // the tax rate plus a select dollar amount
        cout << "\nThe tax due is : " << tax << endl;
    }

    else if (income >=2250 && income < 3750) // if less than 3750 yet more than or equal to 2250
    {
        tax = 37.5 + (income - 2250) * 0.03 ;
        cout << "\nThe tax due is : " << tax << endl;
    }

    else if (income >=3750 && income < 5250) 
    {
        tax = 82.5 + (income - 3750) * 0.04 ;
        cout << "\nThe tax due is : " << tax << endl;
    }

    else if (income >= 5250) // if greater than or equal to 5250 
    {
        tax = 142.5 + (income - 5250) * 0.05 ;
        cout << "\nThe tax due is : " << tax << endl;
    }

}