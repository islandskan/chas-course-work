#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    printf("Enter two numbers(separated by a space)\n");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    return 0;
}

/* Extra:
- find a way to enter as many numbers as you want and perform the calculation
*/
