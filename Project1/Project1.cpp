#include<iostream>

using namespace std ;

int main ()
{
    
    char choice ;
    int quantity ;
    double total ;
    double sum = 0 ;

do{
    
    sum = 0 ;

    cout << "\n***** Welcome to Walid's Cafe *****\n" ;
    cout << "\n______________Menu_________________\n" ;
    cout << "\n\n          1. Cheeseburger -  $2.99   \n" ;
    cout << "          2. Burger -        $2.49   \n" ;
    cout << "          3. Fries -         $1.99   \n" ;
    cout << "          4. Drink -         $1.25   \n" ;

    cout << "\n\nEnter the id number of the item (C for checkout): \n" ;
    cin >> choice ;

    
    while (choice != 'C')
    {   
        
        switch (choice)
        {

            case '1' :

                cout << "\nPlease enter how many you'd like: \n" ;
                cin >> quantity ;
                total = 2.99 * quantity ;
                sum += total ;
                break ;

            case '2' :

                cout << "\nPlease enter how many you'd like: \n" ;
                cin >> quantity ;
                total = 2.49 * quantity ;
                sum += total ;
                break ;

            case '3' :

                cout << "\nPlease enter how many you'd like: \n" ;
                cin >> quantity ;
                total = 1.99 * quantity ;
                sum += total ;
                break ;

            case '4' :

                cout << "\nPlease enter how many you'd like: \n" ;
                cin >> quantity ;
                total = 1.25 * quantity ;
                sum += total ;
                break ;

        }

        cout << "\n\nEnter the id number of the item (C for checkout): \n" ;
        cin >> choice ;

    }

    if (choice == 'C')
    {

        cout << "\nYour total amount will be: $" << sum << "\nThank you, please come again! \n" << endl ;

    }
    

} while (true) ;


}