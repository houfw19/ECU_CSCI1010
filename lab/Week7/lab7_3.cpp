// Walid Houf
// CSCI 1010 Section 001
// Lab Week 7
// Basal Metabollic Rate or BMR

#include<iostream>

using namespace std ;

int main ()

{
    int gend  ; // male and/or female
    int hgt, wgt, age ; // height, weight, age
    double total ; // total BMR
    double final ; // how many chocolate bars can be eaten

    cout << "\nPlease enter the weight, height, and age: \n" ;
    cin >> hgt >> wgt >> age ;
    cout << "\nM for male, F for female: \n" ;
    cin >> gend ;

    if (gend == 'M') // Male
    {

       total = 66 + ( 6.3 * wgt) + ( 12.9 * hgt ) - ( 6.8 * age ) ;

    }

    else // Female
    {
        total = 655 + ( 4.3 * wgt ) + (4.7 * hgt ) - ( 4.7 * age ) ;
    }

    final = total / 230 ; // calories in a chocolate bar

    cout << "\nYou can eat " << final << " chocolate bars.\n" << endl ; // how many chocolate bars can be eaten

}