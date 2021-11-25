// Walid Houf
// CSCI 1010 Section 002
// Assignment 8
// Student's GPA

#include <iostream>

using namespace std ;

double compute_GPA (char grades[], int size) ; // The Declaration of the function

int main()
{
    char StudentA[8] = {'A', 'A', 'B', 'A', 'D', 'C', 'A', 'A'} ; // The characters of the arrays
    char StudentB[12] = {'B', 'B', 'D', 'F', 'A', 'A', 'B', 'A', 'A', 'D', 'A', 'B'} ;
    
    
    cout << "Student A's GPA: " ;
    compute_GPA(StudentA, 8) ; // use of the function

    cout << "\nStudent B's GPA: " ;
    compute_GPA(StudentB, 12) ; // use of the function

    cout << "\n" ; // for neatness
}

double compute_GPA(char grades[], int size)
{

    double GPA = 0 ; 

    double sum = 0 ;
    
    for(int i = 0; i < size; i++)
    {
        switch (grades[i])
        {
        case 'A' : // if the grade is this character
            grades[i] = 4 ; // the value is 4
            sum += 4 ; // so it adds 4 to the sum
            break ;

        case 'B' : // continues from above
            grades[i] = 3 ;
            sum += 3 ;
            break ;

        case 'C' :
            grades[i] = 2 ;
            sum += 2 ;
            break ;

        case 'D' :
            grades[i] = 1 ;
            sum += 1 ;
            break ;

        case 'F' :
            grades[i] = 0 ;
            sum += 0 ;
            break ;
        
        default : // if the value is not A, B, C, D, F
            cout << "Invalid Character !" ;
            break ;
        }

    }

    GPA = sum / size ; // the sum of all the grades is divided by the size to give the grade point AVERAGE

    cout << GPA ; // outputting the GPA

    return GPA ; // GPA returns to zero for later use of the function

}