// Walid Houf
// CSCI 1010 Section 001
// Assignment 7
// 

#include<iostream>

using namespace std ;

void enter(int a[], int n)
{
    int b ; 

    cout << "\nPlease enter a set of positive numbers, ended by -1: " ;

    for (int i = 0; i < n; i++)
    {
        cin >> b ;

        if ( b > -1)
        {
            a[i] = b ;
        }

        else if ( b == -1)
        {
            a[i] = b ;
            break ; 
        }

    }

    cout << " \n" ;
}

void display(int a[], int n)
{
    cout << "The current elements are: \n" ;

    for(int i = 0; i < n; i++)
    {
        
        cout << a[i] << " " ;

    }

    cout << " \n" ;
}

void largest(int a[], int n)
{
    for (int i = 1; i < n - 1 ; i++)
    {

        for(int j = 0; j < n - i; j++)
        {

            if (a[j] < a[j + 1])
            {
                int temp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = temp ;
            }

        }
        
    }
}

int main ()
{
    int a[100] ;

    enter( a, 9 ) ;
    display( a, 8 ) ;
    largest( a, 8 ) ;

    cout << "\nThe largest number is " << a[0] << "\n" ;
    cout << "\n" ;

    a[8] = 10, a[9] = 15 ;

    display( a, 10 ) ;


    cout << "\nAfter sorting, the elements are: " ;
    
    largest( a, 10 ) ;
    
    for( int i = 0; i < 10; i++)
    {
        cout << a[i] << " " ;
    }

    cout << " \n" ;

}