// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x;
    printf("please enter your grade\n");
    scanf ("%d", &x);
    if (x>=100){
        printf("enter correct number\n");
        }else if(100 >= x&& x >= 90){
                printf("grade A\n");
            }else if(89>=x&&x>=80){
                printf("grade B\n");
            }else if(79>=x&&x>=70){
                printf("grade C\n");
            }else if(69>=x&&x>=60) {
                printf("grade D\n");
            }else{
                printf("grade f\n");
            }
          
    return 0;
}