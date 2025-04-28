#include <stdio.h>
// evaluate the priority of the aritmethic operators

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    printf("%d + %d /%d + %d = %.1f", a, b, c, d, (float)a + b / c + d);
    printf("\n(%d + %d) /%d + %d = %.1f", a, b, c, d, (float)(a + b) / c + d);
    printf("\n%d + %d /(%d + %d) = %.1f", a, b, c, d, (float)a + b / (c + d));
    printf("\n(%d + %d) /(%d + %d) = %.1f", a, b, c, d, (float)(a + b) / (c + d));
    return 0;
}
