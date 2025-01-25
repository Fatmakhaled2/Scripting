#include <stdio.h>

int main() {
    int counter=0, num=0 , result=0;
    printf("please enter a number\n");
    scanf ("%d", &num);
    for(int i=1; i<10; i++){
        result = num*i;
        printf("%d * %d = %d\n", num, i, result);
    }
    while(counter<10){
        result = num*counter;
        printf("%d * %d = %d\n", num, counter, result);
        counter++;
    }
   
    return 0;
}