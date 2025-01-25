// Online C compiler to run C program online
#include <stdio.h>
int area(){
    int x,y,sum;
        printf("please enter 2 numbers to calculate area\n");
        scanf ("%d %d",&x , &y);
        sum= x*y;
        printf("area = %d\n", sum);
}
int degree(){
    int degree;
    float c;
       printf("please enter degree\n");
       scanf ("%d", &degree);
       c= 5.0/9.0 * (degree-32);
        printf("degree = %.2f\n",c);
}
int grade(){
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
}
int table(){
    int counter=0, num=0 , result=0;
    printf("please enter a number\n");
    scanf ("%d", &num);
    for(int i=1; i<10; i++){
        result = num*i;
        printf("%d * %d = %d\n", num, i, result);
    }
}
int sum(){
    int num1,num2,result;
    printf("enter 2 numbers\n");
    scanf("%d %d", &num1,&num2);
    result=num1+num2;
    printf("sum is %d", result);
}
int main() {
    int num=0;
    printf("to calculate rectangle area enter 1\nto convert from Fahrenheit to Celsius enter 2\nto calculate grade enter 3\nto print multiplication table enter 4\n");
    scanf("%d",&num);
       if(num ==1){
            area();
        }else if( num ==2){
            degree();
        }else if(num == 3){
            grade();
        } else if (num ==4){
            table();
        }else{
            printf("wrong choice");
        }

    return 0;
}
