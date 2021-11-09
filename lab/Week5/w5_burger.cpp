#include <iostream>
using namespace std;
int main ()
{
    double totalPrice;
    double taxPrice;
    double cheesePrice = 5.89;
    double espressoPrice = 3.99;
    int numCheese;
    int numEspresso;

    cout << "how many cheese burgers : ";
    cin >> numCheese;
    cout << "how many cups of espresso : ";
    cin >> numEspresso;
    //totalPrice = (((numCheese*cheesePrice)+(numEspresso*espressoPrice)));
    //taxPrice = (((numCheese*cheesePrice)+(numEspresso*espressoPrice)))*.07);
    totalPrice = numCheese * cheesePrice + numEspresso * espressoPrice ;
    taxPrice = totalPrice * 0.07 ;
    cout << "The total price for a royal customer is : ";
    cout << totalPrice+taxPrice;
}