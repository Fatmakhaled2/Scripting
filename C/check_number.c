#include <stdio.h>

int main() {
    int x;
    printf("please enter the number\n");
    scanf ("%d", &x);
    if(x>0){
        printf("your number is positive\n");
    }else if(x<0){
        printf("your number is negative\n");
    }else{
        printf("your number is zero\n");
    }

    return 0;
}