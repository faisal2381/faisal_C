#include <stdio.h>

int main ()
{
    int balance, debit, credit;
    printf("Enter your balance: ");
    scanf("%d", &balance); 
    printf("Enter your debit: ");
    scanf("%d", &debit); 
    printf("Enter your credit: ");
    scanf("%d", &credit);

    balance = balance + debit - credit;

    printf("balance is %d", balance);

    // my name is faisal

    return 0;
}