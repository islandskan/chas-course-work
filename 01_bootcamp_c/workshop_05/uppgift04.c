#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random() {
    srand(time(0));
    return rand() % (1000 + 1);
}

int main() {
    int number = get_random();
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    }
    else {
        printf("%d is odd\n", number);
    }
    return 0;
}
