#include <stdio.h>

// prints all variations with assignment operators

int main()
{
    int a = 2;
    int r = a;
    printf("\nR is %i", r);
    r += a;
    printf("\nR is %i", r);
    r = a;

    r -= a;
    printf("\nR is %i", r);
    r = a;

    r *= a;
    printf("\nR is %i", r);
    r = a;

    r /= a;
    printf("\nR is %i", r);
    r = a;

    r %= a;
    printf("\nR is %i", r);
    r = a;

    r &= a;
    printf("\nR is %i", r);
    r = a;

    r |= a;
    printf("\nR is %i", r);
    r = a;

    r ^= a;
    printf("\nR is %i", r);
    r = a;

    r >>= a;
    printf("\nR is %i", r);
    r = a;

    r <<= a;
    printf("\nR is %i", r);
    r = a;
    return 0;
}
