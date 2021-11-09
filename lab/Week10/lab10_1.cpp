#include<iostream>
#include<math.h>

using namespace std ;

int main ()
{
    
    int num, sum;
    char option ;

    do
    {

    cout << "\n**** Scientific Calculator ****\n" ;
    cout << "1. Squared\n" << "2. Square root\n" << "3. Exit\n" ;
    cout << "Please select an option\n" ;
    cin >> option ;

    switch (option)
    {

    case '1' :
        cout << "Please enter a number\n" ;
        cin >> num ;
        sum = num * num ;
        cout << num << "^2 is : " << sum << "\n" << endl ;
        break ;
    case '2' :
        cout << "Please enter a number\n" ;
        cin >> num ;
        sum = sqrt (num) ;
        cout << "Sqrt of " << num << " is " << sum << "\n" << endl ;
        break ;
    default :
        cout << "Invalid input." << endl ;
        break ;
    }

    } while (option != '3');
    

    if (option = '3')
    {
        cout << "@@@Thank you, see you nextime.@@@\n" ;
    }
}