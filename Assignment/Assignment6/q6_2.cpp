#include<iostream>

using namespace std ;

int main ()
{

    int n, s = 0, i ; 
    for(i = 0; i < 10; i++) // how many times it runs
    {
        cout<< "Enter a number: " ;
        cin >> n ;

        if(n > 60)
        {
            s++ ; // whats greater than 60 
        }
    }

    cout << "\nThere are " << s << " numbers greater than 60" << endl ;

}