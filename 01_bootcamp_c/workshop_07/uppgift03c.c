#include <stdio.h>

int main() {
    for (int i = 1; i <= 99;++i) {
        if (i % 2 == 0) {
            printf("Even number = %d\n", i);
        }
        else {
            printf("Odd number = %d\n", i);
        }
    }
    return 0;
}
