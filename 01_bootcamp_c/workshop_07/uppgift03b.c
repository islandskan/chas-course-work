#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t index = 100;
    // uint8_t index = 100;
    while (index >= 0) {
        printf("Number=%lu\n", index);
        --index;
    }
    return 0;
}

/*
A couple observations:
    1. when I first declared index as an uint8_t and looped downwards while index >= 0, there seems to be a overflow as soon as it reaches 0. So it overflows to 255 and the while loop becomes infinite
    2. while having index as an unint8_t and while(index >=0 ), I tried to add an if(index == 0) break; to at least stop the loop when index reached 0. It stopped the infinte loop, but the last value is 1, so it seems an unsigned integer can't be 0
    3. After exiting the while loop, I tested to assign index to 255 and print index + 1. That gave me 256. But when I tested index = 255 + 1, I immediately got an overflow warning.
    4. As soon as I declared index as an int8_t instead, there were no problems looping downwards to 0, while(index >= 0). I could even do it like this while(index > -1)

    I think I solved this:
    1. using an unsigned integer and decrementing downwards
    2. the integer is decremented to 0 and prints 0, however because the last step in the while loop decrements the index, it will cause a "wrap around"/overflow 0->255.
    3. infinite loop
    4. and since I tested to place the if(index == 0) at the end of the while loop, after the  code has printed index = 1, the index is decremented to 0 and the break immediately "kicks in". That's why the print never displayed index as 0
*/

/*
I read more here (https://www.learncpp.com/cpp-tutorial/fixed-width-integers-and-size-t/)[learncpp - fixed width integers and size_t]
 "
    - Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16-bits or 32-bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
    - Prefer std::int#_t when storing a quantity that needs a guaranteed range.
    - Prefer std::uint#_t when doing bit manipulation or well-defined wrap-around behavior is required (e.g. for cryptography or random number generation)."
*/
