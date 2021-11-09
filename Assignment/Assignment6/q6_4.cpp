#include<iostream>

using namespace std ;

int main ()
{

    int a[10], high, low, mean ;

    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter a grade: \t" ;
        cin >> a[i] ;

        if (a[i] < a[i++])
        {
            low = a[i] ;
        }

        else if (a[i] > a[i++])
        {
            high = a[i] ;
        }
        
    }

    cout << "The highest grade is:\t" << high << "\n" << "The lowest grade is:\t" << low << endl ;

}

}