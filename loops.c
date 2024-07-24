#include <stdio.h>

int main ()
{
    // while loop
    
    // initial value 
    // condtion 
    // increment // decrement 
    
    // print first 10 natural numbers 

    int i = 1;

    while (i < 10)
    {
        printf ("%d\n" , i);
        i++;
    }

    printf("\n");

    // print first 10 natural numbers in reverse 

    int j = 10;

    while (j > 0)
    {
        printf ("%d\n" , j);
        j--;
    }

     printf("\n");

     // print first 100 natural odd numbers 

     int k = 1;

     while (k < 100)
     {
        if (k % 2 != 0)
        {
            printf ("%d\n" , k);
        }
        k++;
     }

     printf("\n");


     // do while loop
     
     // inititalition
     // increment // decrement
     // condition

     int a = 1;

    do{
        a++;
        printf("%d\n", a);
        
    } while (a <= 10);

    printf("\n");

    // for loop
    // intialization // condition // increment in one line

    



     









    return 0;
}