// Walid Houf
// CSCI 1010 Section 002
// Assignment 8
// Polynomials

#include<iostream>
#include<math.h> // Used in order to access the math required for the function

using namespace std ;

int equation(int x) ; // The Declaration of the function

int main()
{

    int x1 ;

    cout << "Enter a value for x: " ; // Entering the value of the integer missing in the polynomial
    cin >> x1 ;

    cout << "The value of the polynomial is " ; // The actual value of the entire polynomial
    equation (x1) ; // The function with the actual polynomial, and where the work is done

    cout << " " ; // Space for neatness

}


int equation(int x)
{
    int sum = 0 ; // Assigning sum to zero for return value and for less errors

    sum = (pow (x, 5)) * 3 + (pow (x, 4)) * 2 - (pow (x, 3)) * 5 - (pow(x, 2)) + 7 * x - 6 ; // The actual polynomial

    cout << sum ; // Outputting the sum so the script before can be written then the actual function can just give an output

    return sum ; // Returning to sum AKA 0
}