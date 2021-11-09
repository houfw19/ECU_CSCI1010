#include <iostream>
using namespace std;
int main()
{
   double hourlyPay = 16.78;
   double hoursWorked;
   double overtimePay = (1.5 * hourlyPay);
   //double grossPay;
   cout << "Enter the number of hours worked : ";
   cin >> hoursWorked;
   if (hoursWorked > 40)
   {
      double s1 = hourlyPay * 40;
      double s2 = overtimePay * (hoursWorked - 40);
      double s3 = s1 + s2;
      double grossPay = s3;
      double ssTax = .06 * grossPay;
      double fedTax = .14 * grossPay;
      double stateTax = .05 * grossPay;
      int unionDue = 2.5 * 4;
      cout << "Gross Pay : $";
      cout << grossPay;
      cout << endl;
      cout << "Social Security Tax : $";
      cout << ssTax;
      cout << endl;
      cout << "Federal Income Tax : $";
      cout << fedTax;
      cout << endl;
      cout << "State Income Tax : $";
      cout << stateTax;
      cout << endl;
      cout << "Union Dues : $";
      cout << unionDue;
      cout << endl;
      cout << "Net Income : $";
      cout << grossPay - ssTax - fedTax - stateTax - unionDue;
   }
   else
   {
      double grossPay = hourlyPay * hoursWorked;
      double ssTax = .06 * grossPay;
      double fedTax = .14 * grossPay;
      double stateTax = .05 * grossPay;
      int unionDue = 2.5 * 4;
      cout << "Gross Pay : $";
      cout << grossPay;
      cout << endl;
      cout << "Social Security Tax : $";
      cout << ssTax;
      cout << endl;
      cout << "Federal Income Tax : $";
      cout << fedTax;
      cout << endl;
      cout << "State Income Tax : $";
      cout << stateTax;
      cout << endl;
      cout << "Union Dues : $";
      cout << unionDue;
      cout << endl;
      cout << "Net Income : $";
      cout << grossPay - ssTax - fedTax - stateTax - unionDue;
   }
}