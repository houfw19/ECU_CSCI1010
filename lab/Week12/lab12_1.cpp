// Walid Houf
// CSCI 1010 Section 001
// Lab Week 12 - Question 1
// Reversed Numbers

#include<iostream>

using namespace std ;

int main()
{
    int a[10], i ;
     
    cout << "Enter 10 numbers: \t" ;
      
    for(i = 0; i < 10; i++)
    {
        cin >> a[i] ;// Take numbers from input to reverse 
    }
    
    for(i = 9; i >= 0; i--) // reverse order
    {
        cout << a[i] << " " ;  // Print in reverse order
    }    
}