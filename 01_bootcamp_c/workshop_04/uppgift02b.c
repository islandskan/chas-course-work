#include <stdio.h>

int main()
{
    float floatA;
    float floatB;
    printf("Enter two floating point numbers (you can use positives and negatives), and compare them: ");
    scanf("%f %f", &floatA, &floatB);
    if (floatA == floatB)
    {
        printf("%f == %f: the numbers are the same.", floatA, floatB);
    }
    else if (floatA > floatB)
    {
        printf("%f > %f: Float A is greater than Float B", floatA, floatB);
    }
    else if (floatA < floatB)
    {
        printf("%f < %f: Float A is lesser than Floa B", floatA, floatB);
    }
    else if (floatA >= floatB)
    {
        printf("%f >= %f: Float A is greater than or equal to Float B", floatA, floatB);
    }
    else if (floatA <= floatB)
    {
        printf("%d <= %d: Float A is lesser than or equal to Float B", floatA, floatB);
    }
    else
    {
        printf("Please enter two floating point numbers.");
    }
    return 0;
}
