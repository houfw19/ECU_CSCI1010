// Walid Houf
// CSCI 1010 Section 001
// Assignment 
// To convert the temperature from Farenheit to Celsius

#include<iostream>
#include<math.h>

using namespace std;

int main ()

{
    double T ;
    double V ;
    double W ;

    cout << "Please enter the temperature: \n";
    cin >> T ;

    cout << "Please enter the velocity: \n";
    cin >> V ;

    W = 35.74 + 0.6215 * T + ( 0.4275 * T - 35.75 ) * pow( V, 0.16 );

    cout << "The effective temperature is: " << W << endl;
}