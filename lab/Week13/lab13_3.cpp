// Walid Houf
// CSCI 1010 Section 001
// Lab Week 13 - Question 3
// Single Value in non-empty array

#include<iostream>

using namespace std ;

int main()
{

    int a[7] = {7, 3, 3, 9, 7, 9, 1}, n = 7, target;
    

    for(int i = 0; i < n; i++) // selects the first number of the array
    {
        int flag = 0 ;
        {
            for(int j = 0; j < n; j++) // comparing that specific number with the other elements of the array
            {
                if (a[j] == a[i])
                {
                    flag += 1 ; // flagging the ones found with more tahn one
                }

            }
        }

        if(flag == 1)
        {
            target = a[i] ; // giving which had only showed up a single time
        }
    
    }

    cout << "In the array: " ;

    for (int i = 0; i < n; i++) // displaying the array
    {
        cout << a[i] << " " ;
    }

    cout << "\nThe single number is:" << target << "\n" << endl ; // displaying the single number of the array

}