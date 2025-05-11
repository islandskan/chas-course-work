#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> // to try to check if the user input is interger och floating point by inputting it as a string, then converting it to numeric value

void calculate(int, int*, int*, int*);

int main() {
    int num1 = 0;
    int num2 = 0;
    int option = 0;
    int result = 0;
    char run = 'y';

    do {
        printf("Enter 2 integer numbers to calculate: ");
        scanf("%d %d", &num1, &num2);
        while (option != 1 || option != 2 || option != 3 || option != 4) {
            printf("Pick one math operation to perform: ");
            printf("1. Addition 2. Subtraction 3. Multiplication 4. Division\n");
            scanf("%d", &option);
            if (option == 1 || option == 2 || option == 3 || option == 4) {
                break;
            }
            else {
                printf("Not a valid number. Try again!\n");
            }
        }
        calculate(option, &result, &num1, &num2);
        while (run != 'y' || run != 'n') {
            printf("Try again?");
            scanf(" %c", &run);
            if (run == 'n') {
                break;
            }
            else if (run == 'y') {
                break;
            }
            else {
                printf("Wrong character.\n");
            }
        }
    } while (run == 'y');
    printf("Bye!\n");
    return 0;
}

void calculate(int opt, int* result, int* num1, int* num2) {
    switch (opt)
    {
    case 1:
        *result = *num1 + *num2;
        printf("%d + %d = %d\n", *num1, *num2, *result);
        break;
    case 2:
        *result = *num1 - *num2;
        printf("%d - %d = %d\n", *num1, *num2, *result);
        break;
    case 3:
        *result = *num1 * *num2;
        printf("%d * %d = %d\n", *num1, *num2, *result);
        break;
    case 4:
        if (*num2 == 0) {
            printf("Division by 0 is not permitted");
            return;
        }
        *result = *num1 / *num2;
        printf("%d / %d = %d\n", *num1, *num2, *result);
        break;
    }
}
