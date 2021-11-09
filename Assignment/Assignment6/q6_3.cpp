#include<iostream>

using namespace std ;

int main ()
{

    int a[4] = {}, i, sum ;

    for (i = 1000; i < 9999; i++) // cant really understand
    {

        do 
        {
            a[4] = i ;

            a[1] = ((a[3] % 10) / 3) ;

            if ((a[0] + a[1] + a[2] + a[3]) == 27)
            {
                cout << a[i] << "\n" << endl ;

                break ;
            }
            
            else
            {
                break ;
            }
        
        } while ((a[4] % 2) != 0) ;

        break ;

    }



}