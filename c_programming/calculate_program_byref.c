#include <stdio.h>

// Function prototypes (all use pass by reference)
void add(int *a, int *b, int *result);
void subtract(int *a, int *b, int *result);
void multiply(int *a, int *b, int *result);
void divide(int *a, int *b, float *result);

int main() {
    int num1, num2, choice, int_result;
    float float_result;

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
            add(&num1, &num2, &int_result);
            printf("Result = %d\n", int_result);
            break;

        case 2:
            subtract(&num1, &num2, &int_result);
            printf("Result = %d\n", int_result);
            break;

        case 3:
            multiply(&num1, &num2, &int_result);
            printf("Result = %d\n", int_result);
            break;

        case 4:
            if (num2 != 0) {
                divide(&num1, &num2, &float_result);
                printf("Result = %.2f\n", float_result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// ---------------------- Function Definitions ----------------------

void add(int *a, int *b, int *result) {
    *result = *a + *b;   // dereferencing pointers
}

void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

void divide(int *a, int *b, float *result) {
    *result = (float)(*a) / (*b);
}
