// Walid Houf
// CSCI 1010 Section 001
// Lab Week 7
// Triangle or not?

#include<iostream>

using namespace std ;

int main ()

{

    int a, b, c ; // sides of the triangle
    int total ; // total of sides added up

    cout << "\nPlease enter the value of the angle a: " ; 
    cin >> a; 

    cout << "\nPlease enter the value of the angle b: " ;
    cin >> b;

    cout << "\nPlease enter the value of the angle c: " ;
    cin >> c;

    total = a + b + c ; // equation to find angle total

    if ( total == 180 ) // 180 degrees makes a triangle
        {
        cout << "\nit's a triangle ! \n" ;
        }
    
    else // anything other than 180 degrees is not a triangle
        {
        cout << "\nit's not a triangle ! \n" ;
        }

}