#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Calculator Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result = %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result = %d\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", divide(num1, num2));
            else
                printf("Error: Cannot divide by zero!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


int add(int a, int b) {
    return a + b; // a and b are copies of num1, num2
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}