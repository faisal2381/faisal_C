#include <stdio.h>

int main()
{
    char ch = '3';
    short int short_integer = 1819;
    int i = 78643;
    long int li = 34848734;
    long long int lii = 872367894380;
    float f = 38.33;
    double d = 3438.3783;
    long double ld = 48334789.34749743;

    printf("character is %c \n", ch);
    printf("short integer is %hd \n", short_integer);
    printf("integer is %d \n", i);
    printf("long integer is %ld \n", li);
    printf("long long integer is %lld \n", lii);
    printf("float is %f \n", f);
    printf("double float is %lf \n", d);
    printf("long double is %Lf \n", ld);

    printf ("\n");

    int a = 12;
    int b = 13 ;
    printf (" a is %d and b is %d " , a,b);

    return 0;
}