// Walid Houf
// CSCI 1010 Section 001
// Lab 11
// Binary to Decimal

#include<iostream>
#include<math.h>

using namespace std ;

int convert (long long) ; // conversion of binary to decimal noted

int main ()

{
    long long n ; // the value of the binary number
    int i = 0, dec = 0, rem ;

    cout << "\nEnter a binary: " ;
    cin >> n ; // user input the binary number

    dec = 0 ; // assign decimal with 0 for program
    
    do
    { 
       rem = n % 10 ; // the remainder is the value of n mod 10

       n /= 10 ; // n divided by 10 will give n a new value

       dec += rem * pow(2, i) ; // add the decimal value to the remainder, then multiply this by 2^i

       i++ ; //the post value of i is found and used to continue until i is not 0
    }while ( n != 0) ;

    cout << "The equivalent decimal value is: " << dec << endl ;
 
}