#include<iostream> 

using namespace std ;

int main ()
{

    double i ;
    int sum = 0, n ;
    
    cout << "Please enter a positive integer: \n" ;
    cin >> n ;

    while (i <= n)
    {
        sum += (i / 1) ;
        i += 1 ;
    }

    cout << sum ;
}