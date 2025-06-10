#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CELSIUS 0x63
#define FAHRENHEIT 0x66
#define KELVIN 0x6B
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
        do
        {
            printf("\nF/f=Fahrenheit\nC/c=Celsius\nK/k=Kelvin\nEnter temperature scale to convert from: ");
            fgets(convert_scale_from, sizeof(convert_scale_from), stdin);
            printf("%c", convert_scale_from);
            // scanf(" %c", &convert_scale_from);
            convert_scale_from |= 0x20;
            if (convert_scale_from != CELSIUS && convert_scale_from != FAHRENHEIT && convert_scale_from != KELVIN) {
                printf("Invalid character. Try again");
            }
        } while (convert_scale_from != CELSIUS && convert_scale_from != FAHRENHEIT && convert_scale_from != KELVIN);

        do
        {
            printf("\nEnter temperature scale to convert to: ");
            scanf(" %c", &convert_scale_to);
            convert_scale_to |= 0x20;
            if (convert_scale_to != CELSIUS && convert_scale_to != FAHRENHEIT && convert_scale_to != KELVIN) {
                printf("Invalid character. Try again");
            }
        } while (convert_scale_to != CELSIUS && convert_scale_to != FAHRENHEIT && convert_scale_to != KELVIN);

        printf("Enter a number to convert: ");
        scanf("%lf", &temp_number);
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
        printf("\nDo you want to convert more temperatures?\nY/N?: ");
        scanf(" %c", &new_convert);
        new_convert |= 0x20;
        if (new_convert == 0x6E) {
            break;
        }
        temp_number = 0.0;
        result = 0.0;
    } while (new_convert == 0x79 && new_convert != 0x6E);
    printf("\nBye");
    return 0;
}
