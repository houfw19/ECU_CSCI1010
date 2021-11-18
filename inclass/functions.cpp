// a function is block of code w/ a name

// 2 types of funtions
//- Predefined funtions (provided by C++ library) ex. pow(5, 6) or sqrt(101)
//    - math libraries - #include<math.h>  (doesn't use namesapce) -  #include<cmath> (uses namespace)
                          // C math lib.                               // C++ math lib.

// when using a funtions we say we are calling a function

//    a = sqrt(101)
//    return value = 10.05
           // the argument is (101)
           // the actual fuction runs it 
           // return values is the output

//- Programmer-defined funtions (programmer-defined funtions)
    // sort(a1, 5) - calls the first function of 5 values


    int largest(int a, int b, int c) // the function
    {
        int large ;

        if (a > b && a > c)
        {
            large = a ;
        }
        else if (b > a && b > c)
        {
            large b ;
        }
        else
        {
            large = c ;
        }
        return large ;

    }

    int main()
    {
        int a1, a2, a3 ;

        cout << "Enter threee integers: " ;

        cin >> a1 >> a2 >> a3 ;

        cout << "The largest is " << largest(a1, a2, a3) ; // using the function for these values
        
        return 0 ;
    }
