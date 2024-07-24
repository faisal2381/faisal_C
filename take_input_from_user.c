#include<stdio.h>

int main ()
{ 
    printf("Please Enter Some Value");
    int a;
    scanf("%d" , &a);

    printf("Value Entered by User is %d" , a);

    printf ("\n");

    printf("Enter 2 Values : ");
    int x,y;
    scanf("%d%d" , &x , &y);

    int z = x + y;
    printf("addition is %d", z);

    return 0;
}