#include <stdio.h>

int main ()
{
    // arithmetic operator
    // + - * / % 

    int a = 100;
    int b = 50;

    printf("Add is : %d \n" , a + b);
    printf("Sub is : %d \n" , a - b);
    printf("Mul is : %d \n" , a * b);
    printf("Div is : %d \n" , a / b);
    printf("Mod is : %d \n" , a % b);

    printf ("\n");

    // assignment operator
    // = += -= *= /= %=

    int p = 15;
    // p = p + 3;
    p+= 3;
    printf ("%d" , p );

    printf ("\n");

    // conditional operator
    // < > <= >=

    int x = 15;
    int y = 15;

    printf ("%d" , x>=y); 

    printf ("\n");

    // equality operator 
    // == !=

    int x1 = 10;
    int y1 = 10;

    printf ("%d" , x1!=y1);

    printf ("\n");

    // logical operator 
    // && || 
    // always used between 2 conditonal operators

    int x2 = 12;
    int y2 = 15;

    printf("%d",x2==y2 || x2<y2);

    printf("\n");

    // increment operator 
    // ++ -- 

    int q = 30;
    q+=1;
    q++;
    
    printf("%d\n", q);
    
    return 0;
}