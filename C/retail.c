#include <stdio.h>
#include <stdlib.h>

// Structure to hold employee information
struct employee {
    char name[20];
    int hours;
    int cost;
    float salary;
    float tax;
    float netSalary;
};

// Function to calculate the net salary after applying tax and a 52% bonus
float netsalary(float salary, float tax) {
    float net = salary + (salary * 0.52) - tax;  // Add 52% to salary and subtract tax
    printf("Your net salary is %.2f\n", net);
    return net;
}

// Function to calculate the tax based on the salary
float Tax(float salary) {
    float basetax, tax, lowerlimit, percentageExcess;


    if (salary >= 0 && salary <= 14999) {
        lowerlimit = 0;
        basetax = 0;
        percentageExcess = 15;
    } else if (salary >= 15000 && salary <= 29999) {
        lowerlimit = 15000;
        basetax = 2250;
        percentageExcess = 16;
    } else if (salary >= 30000 && salary <= 49999) {
        lowerlimit = 30000;
        basetax = 4650;
        percentageExcess = 18;
    } else if (salary >= 50000 && salary <= 79999) {
        lowerlimit = 50000;
        basetax = 8250;
        percentageExcess = 20;
    } else if (salary >= 80000 && salary <= 150000) {
        lowerlimit = 80000;
        basetax = 14250;
        percentageExcess = 25;
    } else {
        printf("Salary out of range.\n");
        return 0;
    }

    // Calculate the tax based on the salary and basetax
    tax = basetax + ((salary - lowerlimit) * percentageExcess / 100);
    printf("Your tax is %.2f\n", tax);
    return tax;
}

// Function to calculate the gross salary based on hours worked and cost per hour
float salary(int hours, int cost) {
    float sal = hours * cost;
    printf("Your gross salary is %.2f\n", sal);
    return sal;
}

// Function to save employee data to a file
void saveToFile(struct employee *emp) {
    FILE *file = fopen("employees.txt", "a");


    // Write employee data to the file
    fprintf(file, "%s %d %d %.2f %.2f %.2f\n", emp->name, emp->hours, emp->cost, emp->salary, emp->tax, emp->netSalary);
    fclose(file);
    printf("Done.\n");
}

// Function to retrieve and display employee data from the file
void retrieveFromFile() {
    FILE *file = fopen("employees.txt", "r");

    struct employee emp;  // Temporary employee structure to store data
    printf("Employee data:\n");

    // Read and print employee data until the end of the file
    while (fscanf(file, "%s %d %d %f %f %f",
                  emp.name, &emp.hours, &emp.cost, &emp.salary, &emp.tax, &emp.netSalary) == 6) {
        printf("Name: %s\n", emp.name);
        printf("Hours: %d\n", emp.hours);
        printf("Cost per Hour: %d\n", emp.cost);
        printf("Salary: %.2f\n", emp.salary);
        printf("Tax: %.2f\n", emp.tax);
        printf("Net Salary: %.2f\n", emp.netSalary);
    }
    fclose(file);
}


// Function to delete an employee by name
void deleteEmployee(const char *nameToDelete) {
    FILE *file = fopen("employees.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (!file || !tempFile) {
        printf("Error: Unable to open file.\n");
        return;
    }

    struct employee emp;
    int found = 0;

    // Copy all employees except the one to delete
    while (fscanf(file, "%s %d %d %f %f %f",
                  emp.name, &emp.hours, &emp.cost, &emp.salary, &emp.tax, &emp.netSalary) == 6) {
        if (strcmp(emp.name, nameToDelete) != 0) {
            fprintf(tempFile, "%s %d %d %.2f %.2f %.2f\n", emp.name, emp.hours, emp.cost, emp.salary, emp.tax, emp.netSalary);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    // Replace old file with updated file
    remove("employees.txt");
    rename("temp.txt", "employees.txt");

    if (found) {
        printf("Employee '%s' has been deleted successfully.\n", nameToDelete);
    } else {
        printf("Employee '%s' not found.\n", nameToDelete);
    }
}
void app(){

struct employee emp;
    int choice;

    printf("Choose from the options below:\n");

    while (1) {
        printf("1. Add Employee Data\n");
        printf("2. View All Employee Data\n");
        printf("3. Delete Employee Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter employee name: ");
            scanf("%s", emp.name);
            printf("Enter number of working hours: ");
            scanf("%d", &emp.hours);
            printf("Enter cost per hour: ");
            scanf("%d", &emp.cost);

            emp.salary = salary(emp.hours, emp.cost);
            emp.tax = Tax(emp.salary);
            emp.netSalary = netsalary(emp.salary, emp.tax);

            saveToFile(&emp);

        } else if (choice == 2) {
            retrieveFromFile();

        } else if (choice == 3) {
            char nameToDelete[20];
            printf("Enter the name of the employee to delete: ");
            scanf("%s", nameToDelete);
            deleteEmployee(nameToDelete);

        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;

        } else {
            printf("Invalid choice.\n");
        }
    }


}

int main() {
    app();
    return 0;
}
