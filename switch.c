#include <stdio.h>

int main ()
{
    int a = 12;

    switch (a)
    {
        
    case 10:
        printf("10 \n");
        break;
    case 20:
        printf("20 \n");
        break;
    case 12:
        printf("12 \n");

    case 50:
        printf("50 \n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}