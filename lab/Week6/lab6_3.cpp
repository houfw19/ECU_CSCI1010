// Walid Houf
// CSCI 1010 Section 001
// Assignment 
// Find the distance between points

#include<iostream>
#include<math.h>

using namespace std;

int main ()
{

    int x1 , y1 ;
    int x2 = 0 , y2 = 0 ;
    double distance ;

        // distance = sqrt ( pow( x1 - x2 , 2) + pow( y1 - y2 , 2)) ;


    cout << "Enter two numbers for a point x and y : " ;
    cin >> x1 ; cout << " " ; cin >> y1;

    distance = sqrt ( pow( x1 - x2 , 2) + pow( y1 - y2 , 2));

    cout << "\nThe distance of point (" << x1 << ", " << y1 << ") to the origin point is :" << distance << endl ;


}