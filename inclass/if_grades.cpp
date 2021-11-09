#include<iostream>

using namespace std ;

int main ()

{
    int grade; 

    cout << "Please enter your percentage grade as a whole number (1-100): ";
    cin >> grade ;

    if ( grade >= 90 )
    {
        cout << "Your grade is an A. \n" ;
    }

    else if ( grade >= 80 )
    {
        cout << "Your grade is a B. \n" ;
    }

    else if ( grade >= 70 )
    {
        cout << "Your grade is a C. \n" ;
    }

    else if ( grade >= 60 )
    {
        cout << "\nYour grade is a D. \n" ;
    }

    else if ( grade >= 0 )
    {
        cout << "\nYour grade is an F. \n" ;
    }
}

