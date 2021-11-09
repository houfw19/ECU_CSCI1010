#include <iostream>
using namespace std;
int main ()
{
    double mile1 ;
    double kilo1 ;
    
    cout << "Please enter the number of miles : \n\n" ;
    cin >> mile1 ;
    kilo1 = ( mile1 * 1.609 ) ;
    cout << "The equivanent distance in kilometer is : " << kilo1 << endl ;
}