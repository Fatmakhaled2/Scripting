#include <stdio.h>
int main()
{
    int width, height, area;
    printf("Please enter 2 numbers to calculate area:\n");
    scanf("%d %d", &height, &width);
    area = height * width;
    printf("Area = %d\n", area);
    return 0;
}