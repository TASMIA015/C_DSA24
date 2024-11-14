// Day 10 - Simple Calculator
#include<stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter two numbers:\n");
    scanf("%lf %lf", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  

    switch(op) {
        case '+':
            printf("Addition: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("Subtraction: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("Multiplication: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("Division: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
}
        
