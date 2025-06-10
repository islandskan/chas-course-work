#include <stdio.h>

int main() {
    char new_table = 'y';
    int table_start = 0;
    int table_end = 0;
    int interval = 0;
    int row_number = 0;

    do
    {
        printf("\n");
        for (int j = 0; j < 20; ++j) {
            printf("~*");
        }
        printf("\nGenerate multiplication tables!\n");
        printf("Enter two number to display table interval(2 positive intergers): ");
        scanf("%i %i", &table_start, &table_end);
        interval = table_end - table_start;
        printf("Enter the number of rows to display from the tables(1 positive integer): ");
        scanf("%i", &row_number);
        for (int index = 0; index <= interval; ++index) {
            printf("\n%i:\n", table_start);
            for (int j_index = 1; j_index <= row_number; ++j_index) {
                printf("\t%i x %i = %i\t", table_start, j_index, (table_start * j_index));
                printf("\n");
            }
            ++table_start;
            printf("\n");
        }
        for (int j = 0; j < 20; ++j) {
            printf("~*");
        }
        printf("\nDo you want to generate a new table?\nY/N?: ");
        scanf(" %c", &new_table);
        if ((new_table |= 0x20) == 0x6E) {
            break;
        }
        row_number = 0;
        table_start = 0;
        table_end = 0;
        interval = 0;

    } while ((new_table |= 0x20) == 0x79 && (new_table |= 0x20) != 0x6E);
    printf("Bye!\n");
    return 0;
}
