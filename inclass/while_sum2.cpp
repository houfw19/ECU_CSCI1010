#include<iostream>

using namespace std ;

int main ()

{

    int num ;
    int sum = 0 ; // sum equal zero at first

    cout << "Enter integers (0 to terminate)" << endl ;
    cin >> num ;

    while (num != 0) // keeps running when true, until 0 != 0 which is false.
    {

        sum += num ; // sum = sum + num
        cin >> num ; // enters next number to keep going until 0 is entered to terminate

    }

    cout << "The sum is " << sum << endl ;
    
}