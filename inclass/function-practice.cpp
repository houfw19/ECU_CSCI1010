#include <iostream>

using namespace std ;

// if there is no return value like "area" 
// then use voic in place of the double value or int value
// then endl instead of return 0; 

// for a menu, a function can be used by simply using //" void display_MENUNAMEHERE() "// 
double cir_area (double r)
{

    double area ;

    area = 3.14 * ( r * r ) ;

    return area ;

}

int main ()
{
    double r1, r2, r3, r4;

    cout << "Please enter the radius of the circles: " ; 

    cin >> r1 >> r2 >> r3 >> r4;

    cout << "\nThe area of the 1st circle is: " << cir_area (r1) ;
    cout << "\nThe area of the 2nd circle is: " << cir_area (r2) ;
    cout << "\nThe area of the 3rd circle is: " << cir_area (r3) ;
    cout << "\nThe area of the 4th circle is: " << cir_area (r4) << "\n";

    return 0 ;
}