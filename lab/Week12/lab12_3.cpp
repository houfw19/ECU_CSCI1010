// Walid Houf
// CSCI 1010 Section 001
// Lab Week 12 - Question 3
// Finding the mean, values > than, and values < than. 

#include<iostream>

using namespace std ;

int main()
{

    int a[10], i, mean = 0, sum = 0, less = 0, grtr = 0; // decalring values to use, zeros are place holders

    for(i = 0 ; i < 10 ; i++) // gives the first loop for user input
    {
        cin >> a[i] ;
    }

    for(i = 0 ; i < 10 ; i++) // finds the sum of all the numbers the user just input
    {
        sum += a[i] ;
    }

    mean = sum / 10 ; // finding the mean 

    for(i = 0 ; i < 10 ; i++)
    {
        if (mean > a[i]) // if the mean is more than each value, then add one to numbers less than mean
        {
            less += 1 ;
        }

        else if (mean < a[i]) // vice versa, but doesn't display what is equal to mean
        {
            grtr += 1 ;
        }
    }    

    cout << "The mean value is " << mean << "\n" << grtr << " element(s) are greater than the mean.\n" << less << " element(s) are less than the mean.\n" << endl ; 
    // output of the mean, numbers greater than mean in array, and nuumbers less than mean in array
}
