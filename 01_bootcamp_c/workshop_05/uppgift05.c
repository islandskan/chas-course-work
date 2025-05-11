#include <stdio.h>


void calc_electricity(double* result, int* unit);

int main() {
    int unit = 0;
    double result = 0.0;
    printf("Enter number of units consumed electricity: ");
    scanf("%d", &unit);
    calc_electricity(&result, &unit);
    printf("Total sum: %.2lf\n", result);
    return 0;
}

void calc_electricity(double* result, int* unit) {

    if (*unit <= 100) {
        *result = *unit * 0.25;
    }
    else if (*unit > 100 && *unit <= 200) {
        *result = (100 * 0.25) + ((*unit - 100) * 0.75);
    }
    else if (*unit > 200 && *unit <= 500) {
        *result = (100 * 0.25) + (100 * 0.75) + ((*unit - 200) * 1.5);
    }
    else {
        *result = (100 * 0.25) + (100 * 0.75) + ((100 * 1.5) * 3) + ((*unit - 500) * 4.0);
    }
}
