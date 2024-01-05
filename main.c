#include <stdio.h>
#include <stdlib.h>

// Structure for storing employee information
struct employee {
    char name[50];
    float ked;
    float Rate;
};

// Function for calculating salary
float calculateSalary(float ked, float Rate) {
    return ked * Rate;
}

int main() {

    struct employee employee;

    // Requests information from the employee
    printf("Enter the employee's name: ");
    fgets(employee.name, sizeof(employee.name), stdin);

    printf("Inform the number of hours worked: ");
    scanf("%f", &employee.ked);

    printf("Inform the hourly rate: ");
    scanf("%f", &employee.Rate);

    // Calculates salary
    float salario = calculateSalary(employee.ked, employee.Rate);

    // Displays the payslip
    printf("\n Paycheck of %s\n", employee.name);
    printf("Hours worked: %.2f\n", employee.ked);
    printf("Hourly rate: R$%.2f\n", employee.Rate);
    printf("Total salary: R$%.2f\n", salario);

    return 0;
}