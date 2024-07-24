#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("%d is even.\n", a);

     printf("\n");
     
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z)
        printf("%d is the largest number.\n", x);
    else if (y >= x && y >= z)
        printf("%d is the largest number.\n", y);
    else
        printf("%d is the largest number.\n", z);



        for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }


    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }


    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }

    printf("Sum of the first 50 natural numbers is: %d\n", sum);





















    return 0;
}





























    