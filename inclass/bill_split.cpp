#include <iostream>
using namespace std;
int main ()
{
    int totalPrice, totalPeople;
    double taxPrice, totalTip, totalperPerson;
    
    //totalperPerson = .25 * (totalPrice + totalTip + taxPrice);

    cout << "Please input the total price : \n" ;
    cin >> totalPrice ;

    totalTip = (totalPrice * .07) ; 

    cout << "Please input the amount of people : \n" ;
    cin >> totalPeople ;

    cout << "The each person must pay will be : \n" ;

    totalperPerson = .25 * (totalPrice + totalTip + taxPrice) ;

    cout << "The amount each person must pay will be : \n" << totalperPerson << endl ;
}