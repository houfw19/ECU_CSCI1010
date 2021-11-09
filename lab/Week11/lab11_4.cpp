// Walid Houf
// CSCI 1010 Section 001
// Lab 11
// Even Square Roots

#include<iostream>
#include<math.h> 
using namespace std;

int main ()
{

    int n ; 

    cout << "Enter an integer: " ;
    cin >> n ;

    for (int i = 1 ; i * i <= n ; i++) // while i is 1, i^2 is less than or equal to the integer. (go to if next), after the if statement is complete return to for as post i and continue until i^2 > n.
    {

        if (((i * i) % 2) == 0) // if i is even, then i^2 is a even square root, this number will be output (go back to for).
        {

            cout << i*i << '\t'; // endl moved outside so it will continue

        }

    }
    cout << endl;

    return 0 ;

}
