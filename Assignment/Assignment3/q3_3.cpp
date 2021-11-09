// Walid Houf
// CSCI 1010 Section 001
// Assignment 3
// Splitting the bill

#include <iostream>

using namespace std;

int main ()
{
    int subTotal ;
    double tip ; // 15%
    int persons ;
    double totalPer ;
    
    // totalPer = ( ( subTotal * ( tip ) ) + subTotal ) / persons

    cout << "\nTotal before tip: \n" ;
    cin >> subTotal ;

    cout << "\nTip in percentage: \n" ;
    cin >> tip ;

    cout << "\nNumber of persons: \n" ;
    cin >> persons ;

    totalPer = ( ( subTotal * ( tip ) ) + subTotal ) / persons ;

    cout << "\nThe total amount for each person is: " << totalPer << endl ;

}

