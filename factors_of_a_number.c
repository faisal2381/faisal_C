#include <stdio.h>

int main() {
    printf("Please Enter Some Value");
    int a;
    scanf("%d" , &a);
    
    printf("Factors of %d are: ", a);
    for(int i = 1; i <= a; i++) {
        if(a % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}