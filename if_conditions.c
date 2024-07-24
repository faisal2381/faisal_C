#include <stdio.h>

int main ()
{
    // if else 

    int a = 10;
    if (a<15)
    {
        printf("Value is less than 15\n");
    }

    int b = 15;
    if (b<20)
    {
        printf("Value is less than 20\n");
    }
    else {
        printf("Value is greater than 20\n");
    }

    printf("Please enter some value");
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        printf("%d is less then %d\n", x, y);
    }
    else
    {
        printf("%d is greater then %d\n", x, y);
    }

    // if else ladder => else if 

    int x1 = 40; 
     
    if (x1 < 47)
    {
        printf("Value is less then 47\n");
    }
    else if (x1 > 47)
    {
        printf("Value is greater then 47\n");
    }
    else
    {
        printf("Value is equal to 47\n");
    }
    if (x1 % 2 == 0)
    {
        printf("Value is even\n");
    }
    else
    {
        printf("Value is odd\n");
    }

    // nested if else

    int h = 4;

    if (h > 2)
    {

        if (h < 3)
        {
            printf("inner if\n");
        }
        else
        {
            if (h > 5)
            {
                if (h < 20)
                {
                    printf("inner inner  if\n");
                }
                else
                {
                    printf("inner inner else\n");
                }
            }
            else
            {
                printf("inner else\n");
            }
        }
    }
    else
    {
        if (h < 99)
        {
            printf("second inner if\n");
        }
        else
        {
            printf("second inner else\n");
        }
    }
    
    return 0;
}