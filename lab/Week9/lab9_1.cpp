// Walid Houf
// CSCI 1010 Section 001
// Lab 9
// Interest total

#include<iostream>

using namespace std ;

int main ()

{

    int b ; // b is the amoint over $1000
    double interest, Total, Minimum, c ; // c is the account balance

    b = c - 1000 ;

    cout << "Please enter the account balance $ " ; 
    cin >> c ;

    if ( c <= 1000 ) // if the balance is less then $1000 then this will be used
    {

        interest = c * 0.015 ; // 1.5% interest
        cout << "The interest due is $ " << interest << endl ;

    }
    else
    {
       
        interest = (( c - 1000) * 0.01 ) + (1000 * 0.015); // 1.5% interest on up to $1000, then the amount after $1000 will get 1%
        cout << "The interest due is $ " << interest << endl ;  
    }

    Total = c + interest ; // the total is the account balance plus the earned interest

    if (Total > 10)
    {
        Minimum = Total * 0.1 ; // Minimum payment is 10% of the total account balance if the balance is over $10
    }

    if (Total <= 10) // Minimum payment is the total account balance is less then $10
    {
        Minimum = Total ;
    }
    
    cout << "The total amount due is $ " << Total << endl ;

    cout << "The minimum payment due is $ " << Minimum << endl ;
    
}