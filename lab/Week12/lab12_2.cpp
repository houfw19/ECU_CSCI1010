// Walid Houf
// CSCI 1010 Section 001
// Lab Week 12 - Question 2
// Fibonacci Numbers

#include<iostream>

using namespace std ;

int main()
{

    int a[40], i;
    a[0] = 0 ; // already know the value
    a[1] = 1 ; // already know the value

    for(i = 2; i < 40; i++) // Starting from the 3rd value, and there will only be 40 numbers in the arrary; 0-39.
    {
        a[i] = a[i-1] + a[i-2] ; // Adding the two numbers from before to get the sum for the next number (Fibonacci Number)
        cout << a[i] << " " ; // outputting the number found
    }

}