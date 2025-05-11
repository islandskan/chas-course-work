#include <stdio.h>

int main()
{
    int intA;
    int intB;
    printf("Enter two integers (you can use positives and negatives), and compare them: ");
    scanf("%d %d", &intA, &intB);
    if (intA == intB)
    {
        printf("%d == %d: the numbers are the same.", intA, intB);
    }
    else if (intA > intB)
    {
        printf("%d > %d: Interger A is greater than Interger B", intA, intB);
    }
    else if (intA < intB)
    {
        printf("%d < %d: Interger A is lesser than Interger B", intA, intB);
    }
    else if (intA >= intB)
    {
        printf("%d >= %d: Interger A is greater than or equal to Interger B", intA, intB);
    }
    else if (intA <= intB)
    {
        printf("%d <= %d: Interger A is lesser than or equal to Interger B", intA, intB);
    }
    else
    {
        printf("Please enter two intergers.");
    }
    return 0;
}
