#include<iostream>

using namespace std ;

int gcd(int m, int n)
{
    if (n == 0)
    return m ;
    return gcd (n, m % n) ;
}

int main ()
{

    int m, n;

    cout << "\nEnter two integers: " ;
    cin >> m >> n;

    cout << "GCD: " << gcd(m, n) << endl ;

}