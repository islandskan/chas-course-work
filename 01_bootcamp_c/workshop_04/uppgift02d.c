#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 24;
    int b = 15;
    int c = 33;
    bool compareAtoB = a < b;
    bool compareAtoC = a > c;

    // printf("%d", compareAtoB);
    // printf("%d", compareAtoC);

    printf("a < b AND a > c = %d\n", compareAtoB && compareAtoC);
    printf("a < b OR a > c = %d\n", compareAtoB || compareAtoC);
    printf("NOT(a < b AND a > c) = %d\n", !(compareAtoB && compareAtoC));
    printf("NOT(a < b AND a > c) = %d\n", !(compareAtoB || compareAtoC));

    return 0;
}
