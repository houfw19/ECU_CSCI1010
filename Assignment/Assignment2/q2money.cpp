#include <iostream>
using namespace std;
int main ()
{
    double quarter1 = 25;
    double dime1 = 10;
    double nickle1 = 5;
    int quarters;
    int dimes;
    int nickles;
    double total;
    
    cout << "Number of quarters : \n"; 
    cin >> quarters;
    cout << "Number of dimes : \n"; 
    cin >> dimes;
    cout << "Number of nickles : \n"; 
    cin >> nickles;
    //total = (quarters) + (dimes) + (nickles);
    cout << "There are " << total << " cents in total. \n" << endl;
}