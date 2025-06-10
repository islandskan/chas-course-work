#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define CELSIUS 0x63
#define FAHRENHEIT 0x66
#define KELVIN 0x6B
#define YES 0x79
#define NO 0x6E
#define BUFFER_SIZE 100

int main() {
    char input_buffer[BUFFER_SIZE];
    char new_convert = 'y';
    char convert_scale_to;
    char convert_scale_from;
    double temp_number = 0.0;
    double result = 0.0;

    do
    {
        for (int j = 0; j < 20; ++j) {
            printf("~*");
        }
        printf("\nTemperature converter");
        while (1)
        {
            printf("\nF/f=Fahrenheit\nC/c=Celsius\nK/k=Kelvin\nEnter temperature scale to convert from: ");
            if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
                if (strlen(input_buffer) == 2 && (input_buffer[1]) == '\n' || (input_buffer[1]) == '\r') {
                    convert_scale_from = input_buffer[0] | 0x20;
                    // convert_scale_from |= 0x20;
                    if (convert_scale_from == CELSIUS || convert_scale_from == FAHRENHEIT || convert_scale_from == KELVIN) {
                        break;
                    }
                }
            }
            printf("Invalid character. Try again");
        }

        while (1)
        {
            printf("\nEnter temperature scale to convert to: ");
            if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
                if (strlen(input_buffer) == 2 && (input_buffer[1] == '\n') || (input_buffer[1] == '\r')) {
                    convert_scale_to = input_buffer[0] | 0x20;
                    // convert_scale_to |= 0x20;
                    if (convert_scale_to == CELSIUS || convert_scale_to == FAHRENHEIT || convert_scale_to == KELVIN) {
                        break;
                    }
                }
            }
            printf("Invalid character. Try again");
        }

        while (1) {
            char* end_ptr;
            printf("Enter a number to convert: ");
            // scanf("%lf", &temp_number);
            if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
                temp_number = strtod(input_buffer, &end_ptr);
                if (end_ptr != input_buffer && (*end_ptr == '\n' || *end_ptr == '\0' || isspace(*end_ptr))) {
                    break;
                }
            }
            printf("Invalid number. Try again.");
        }
        switch (convert_scale_from) {
        case 'f':
            switch (convert_scale_to) {
            case 'c':
                result = ((temp_number - 32.0) * 5.0 / 9.0);
                break;
            case 'k':
                result = (temp_number - 32.0) / 1.8 + 273.15;
                break;
            }
            break;
        case 'c':
            switch (convert_scale_to) {
            case 'f':
                result = (temp_number * 9.0 / 5.0) + 32.0;
                break;
            case 'k':
                result = (temp_number)+237.15;
                break;
            }
            break;
        case 'k':
            switch (convert_scale_to) {
            case 'f':
                result = 1.8 * (temp_number - 273.15) + 32.0;
                break;
            case 'c':
                result = (temp_number)-273.15;
                break;
            }
            break;
        default:
            printf("Invalid number. Please try again.");
        }
        printf("\nThe temperature is %.1lf%c", result, (convert_scale_to - 0x20));

        printf("\n");
        for (int j = 0; j < 20; ++j) {
            printf("~*");
        }
        while (1) {
            printf("\nDo you want to convert more temperatures?\nY/N?: ");
            // scanf(" %c", &new_convert);
            if (fgets(input_buffer, sizeof(input_buffer), stdin)) {
                if (strlen(input_buffer) == 2 && (input_buffer[1] == '\n' || (input_buffer[1] == '\r'))) {
                    // new_convert |= 0x20;
                    new_convert = input_buffer[0] | 0x20;
                    if (new_convert == YES || new_convert == NO) {
                        break;
                    }
                }
            }
            printf("Invalid input. Enter Y/y or N/n\n");
        }

        if (new_convert == NO) {
            break;
        }
        temp_number = 0.0;
        result = 0.0;
    } while (new_convert == YES && new_convert != NO);
    printf("\nBye");
    return 0;
}
