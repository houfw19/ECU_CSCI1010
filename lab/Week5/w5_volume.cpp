#include <iostream>
using namespace std;

int main()
{
    double rad1;
    double hgt1;
    double vol1;
    cout << "Find the Volume of the cylinder\n\n";
    cout << "Input the radius of the cylinder : \n\n";
    cin >> rad1;
    cout << "Input the height of the cylinder : \n\n";
    cin >> hgt1;
    vol1 = (3.14*rad1*rad1*hgt1);
    cout << "The volume of a cylinder is : " << vol1 << endl;
}