// Write C program to perform basic arithmetic operations: addition, subtraction, multiplication   and division of two numbers. Numbers should be integers and will be entered by the user.

#include <stdio.h>
int main() {
    int a, b;
    int sum, difference, product;
    float division;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    add = a + b;
    subtraction = a - b;
    product = a * b;
    division = (float)a / b;   
    printf("\nResults:\n");
    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", product);
    printf("Division = %.2f\n", division);
    return 0;
}
