// Walid Houf
// CSCI 1010 Section 001
// Lab Week 13 - Question 1
// Reverse Array

#include<iostream>

using namespace std ;

int main()
{
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55}, len = 10 ;
    
    cout << "The reversed elements are: \n" ;

    for (int i = 0; i < len/2; i++)
    {

        int temp = a[i] ;
        a[i] = a[len - 1 - i] ;
        a[len - 1 - i] = temp ;

    }

    for(i = 0; i < 10; i++) // reverse order
    {
        cout << a[i] << " \t" ;  // Print in reverse order
    }    

}