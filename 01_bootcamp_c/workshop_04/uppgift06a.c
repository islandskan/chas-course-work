#include <stdio.h>

int main() {
    float fahrenheit = 0.0;
    printf("Enter a temperature in : ");
    scanf("%f", &fahrenheit);
    printf("%.1f F = %.1f C\n", fahrenheit, ((fahrenheit - 32.0) * 5.0 / 9.9));
    return 0;
}
