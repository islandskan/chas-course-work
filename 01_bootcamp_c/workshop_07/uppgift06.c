/*
1. calculator
2. present math operators: 0 = exit 1 = add 2 = sub 3 = multip. 4 = divide
3. ask for two floating point numbers
4. pick operation
    - handle if user pick incorrect option
5. calc numbers based on operation
6. show calculation and result
7. restart until user press 0
8. handle incorrect inputs
9. handle division by 0
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BUFFER_SIZE 100
#define YES 0x79
#define NO 0x6E

int main() {
    float num1;
    float num2;
    float result = 0.0;
    char input_buffer[BUFFER_SIZE];
    int menu_option;
    char running = YES;

    do
    {

        printf("\n");
        for (int j = 0; j < 20; ++j) {
            printf("~*");
        }
        printf("\nCALCULATOR\n");
        printf("0. Exit the program\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("Pich one operation(enter 0-4)\n");
        if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
            if (strlen(input_buffer) == 2 && (input_buffer[1]) == '\n' || (input_buffer[1]) == '\r') {
                if (isdigit(input_buffer[0])) {
                    menu_option = input_buffer[0] - '0'; // convert from ASCII value of that number to integer
                    if (menu_option >= 1 && menu_option <= 4) {
                        char* end_ptr;
                        /*
                        while(1)
                        enter first number
                        use fgets to get input
                        use strof with input buffer and endptr to get the number
                        check if endptr != input buffer AND (*end_ptr == '\n' || *endptr == '\0')
                        break;

                        printf(Invalid. Try again.)
                        */

                        /*
                        while(1)
                        enter second number
                        repeat steps above
                        if menu_option is 4 = division && num2 == 0, warn for division by 0 and try again
                        */
                    }

                    switch (menu_option) {
                    case 0:
                        running = NO;
                        break;
                    case 1:
                        result = num1 + num2;
                        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                        break;
                    case 2:
                        result = num1 - num2;
                        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                        break;
                    case 3:
                        result = num1 * num2;
                        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                        break;
                    case 4:
                        result - num1 / num2;
                        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                        break;
                    default:
                        printf("Invalid option. Enter a number 0-4\n");
                        break;
                    }
                }
                else {
                    printf("Invalid input, not a number. Enter a number 0-4\n");
                }
            }
        }

        if (running == YES) {
            while (1) {
                printf("Do you want to contine? (y/n): ");
                if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
                    if (strlen(input_buffer) == 2 && (input_buffer[1]) == '\n' || (input_buffer[1]) == '\r') {
                        running = input_buffer[0] | 0x20;
                        if (running == YES || running == NO) {
                            break;
                        }
                    }
                }
                printf("Invalid input. Try again with Y/y or N/n\n");
            }
            if (running == NO) {
                break;
            }
        }

    } while (running == YES && running != NO);
    printf("Bye!");
    return 0;
}
