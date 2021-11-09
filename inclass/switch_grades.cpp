#include<iostream>

using namespace std ;

int main()
{

    int result, a, b ;
    char opt ;

    cout << "Please enter a number for the corresponding operation." ;
    cout << "\n1. Addition \n" ; cout << "\n2. Subtraction \n" ; cout << "\n3. Multiplication \n" ; cout << "\n4. Addition \n" ;
    cin >> opt ;

    cout << "Please enter two numbers." ;
    
    cin >> a >> b ;


    switch(opt)
    {
        case '1':
            result = a + b ;
            cout << a << "+" << b << "=" << result << endl ;
            break ;
        case '2':
            result = a - b ;
            cout << a << "-" << b << "=" << result << endl ;
            break ;
        case '3':
            result = a * b ;
            cout << a << "*" << b << "=" << result << endl ;
            break ;
        case '4':
            result = a / b ;
            cout << a << "/" << b << "=" << result << endl ;
            break ;
        defualt :
            cout << "This is not an operation." << endl ;
            break ;
    }

}