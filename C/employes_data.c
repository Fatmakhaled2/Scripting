#include <stdio.h>
#include <stdlib.h>

struct employee{

char name[20];
int id;
float salary;

};


int main()
{

struct employee emp;
printf("enter your name\n");
scanf("%s\n", emp.name);

printf("enter your id\n");
scanf("%d\n", emp.id);

printf("enter your salary");
scanf("%f\n", emp.salary);


printf("details \n");
printf("Name: %s\n", emp.name);
printf("ID: %d\n", emp.id);
printf("Salary: %f\n", emp.salary);

    return 0;
}
