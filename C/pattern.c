#include <stdio.h>

int main() {
    int num = 0;
    printf("Please enter a number:\n");
    scanf("%d", &num);

    
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    
    for (int i = 1; i <= num; i++) {
        for (int j = num; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

   
    for (int i = 1; i <= num; i++) {
       
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }
     
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
