// Walid Houf
// CSCI 1010 Section 001
// Lab Week 13 - Question 2
// Inserting Element

#include<iostream>

using namespace std ;

int main()
{
    int a[100], used = 8, i;

    cout << "\nEnter 8 numbers for the array: \n" ;

    for (int i = 0; i < 8; i++) // User input for the array
    {
        cin >> a[i] ;
    }

    cout << "\n\nNow the elements in the array: \n" ;

    for (int i = 0; i < 8; i++) // Display the array
    {
        cout << a[i] << " " ;
    }

    for (int i = used; i > 0 ;i--) // moving all values back by one element
    {
        int temp = a[i] ;
        a[i] = a[i - 1] ;
        a[i - 1] = temp ;
    }

    a[0] = 18 ; // inserting 18 as first element
    int n = used + 1 ;

    cout << "\n\nAfter insterting 18 as the first number: \n" ;

    for (int i = 0; i < 9; i++) // displaying the array with 18 in front
    {
        cout << a[i] << " " ;
    }

    cout << "\n\nAfter sorting the arrary in descending order: \n" ;

    for (int i = 1; i < n - 1 ; i++) // sorting the array by selecting the first num
    {

        for(int j = 0; j < n - i; j++) // and comparing with another
        {

            if (a[j] < a[j + 1])
            {
                int temp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = temp ;
            }

        }

    }

    for (int i = 0; i < 9; i++) // Display the array from greatest to least
    {
        cout << a[i] << " " ;
    }

}