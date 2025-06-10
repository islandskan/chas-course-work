#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t index = 0;
    do
    {
        printf("Number=%lu\n", index);
        ++index;
    } while (index < 101);

    return 0;
}
