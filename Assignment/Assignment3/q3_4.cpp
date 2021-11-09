// Walid Houf
// CSCI 1010 Section 001
// Assignment 3
// Totals

#include <iostream>

using namespace std;

int main ()
{
    int x, v, t ;
    double g = 9.80665 ;
    double total ;

    cout << "\n Enter x: " ;
    cin >> x ;
    cout << "\n Enter v: " ;
    cin >> v ;
    cout << "\n Enter t: " ;
    cin >> t ;

    total = x + (v * t) - (g * (t ^ 2)) / 2 ;

    cout << "\n The total is: " << total << endl ;

}