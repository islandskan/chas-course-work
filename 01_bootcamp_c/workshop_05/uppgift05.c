#include <stdio.h>


void calc_electricity(double* result, int unit);

int main() {
    int unit = 0;
    double result = 0.0;
    printf("Enter number of units consumed electricity: ");
    scanf("%d", &unit);
    while (unit <= 0) {
        printf("Can't calculate 0 unit. Try again.\nEnter number of units consumed electricity: ");
        scanf("%d", &unit);
    }
    calc_electricity(&result, unit);
    printf("Total sum: %.2lf\n", result);
    return 0;
}

void calc_electricity(double* result, int unit) {

    if (unit <= 100) {
        *result = unit * 0.25;
    }
    else if (unit > 100 && unit <= 200) {
        *result = (100 * 0.25) + ((unit - 100) * 0.75);
    }
    else if (unit > 200 && unit <= 500) {
        *result = (100 * 0.25) + (100 * 0.75) + ((unit - 200) * 1.5);
    }
    else {
        *result = (100 * 0.25) + (100 * 0.75) + (3 * (100 * 1.5)) + ((unit - 500) * 4.0);
    }
}

/*
Some notes afterwards: i may have been a bit over the top to pass both result and unit as pointers. I may have been enough to just pass result as reference, and then pass unit as value.
Maybe just pass as reference if I am actually going to modify the variable from another scope.
*/
