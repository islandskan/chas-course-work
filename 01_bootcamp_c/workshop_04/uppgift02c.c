#include <stdio.h>
// ask for two characters (letters and symbols)
// print the comparisions

int main()
{
    char charA;
    char charB;
    printf("Enter two characters (letters or symbols), and compare them: ");
    scanf("%c %c", &charA, &charB);
    if (charA == charB)
    {
        printf("%c and %c are the same", charA, charB);
    }
    else if (charA > charB)
    {
        printf("%c is greater than %c", charA, charB);
    }
    else if (charA < charB)
    {
        printf("%c is lesser than %c", charA, charB);
    }
    else
    {
        printf("%c and %c are not the same", charA, charB);
    }
    return 0;
}
