// Walid Houf
// CSCI 1010 Section 001
// Assignment 3
// Reversed Number

#include <iostream>

using namespace std;

int main ()

{  

	int n;
    int r = 0;
    int m;

	cout << " Enter a number: ";
	cin >> n ;

	while(n!=0)
	{

	    m=n%10;
	    r = r * 10 + m;
	    n/=10;
        
	}

	cout<<"Reversed Number: " << r <<endl;

}