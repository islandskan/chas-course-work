#include <stdio.h>

void main() {
    unsigned int myNum = 0;
    printf("Enter your age: ");
    scanf("%u", &myNum);
    printf("Your age is: %u\n", myNum);
}

/*
- user input(basics):
    - https://www.w3schools.com/c/c_user_input.php
    - scanf(format specifier, &ref_to_memoryaddr.)
*/

/*
Why int main() vs. void main()?
    - https://thisvsthat.io/int-main-in-c-vs-void-main-in-c
    entry point of the c program
    int main()
        - expected to return an integer
        - in this case the operating system return 1 as the exit status of the program
        - arguments (argc, argv)
    void main()
        - no need to return anything from the program
        - no argument

*/
