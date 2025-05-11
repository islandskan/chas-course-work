#include <stdio.h>

int main() {
    float celsius = 0.0;
    printf("Enter a temperature in celsius");
    scanf("%f", &celsius);
    printf("%.1f C = %.1f F\n", celsius, ((celsius * 1.8) + 32));

    return 0;
}
