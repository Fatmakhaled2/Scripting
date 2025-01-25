// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int my_array[]={1,2,3,4,5};
    for(int i=0; i< 5; i++){
        printf("%d\n",my_array[i]);
    }
    
    int array[5];
    printf("enter 5 numbers");
    for(int i=0; i< 5; i++){
        scanf("%d", &array[i]);
    }
    
   for(int i=0; i< 5; i++){
        printf("%d ",array[i]);
    }
    return 0;
}