#include <stdio.h>

int main() {
    const double PI = 3.14159;
    float radius, height, volumeOfCylinder;

    printf("Calculate the volume of a cylinder!\n");
    printf("Enter the radius (in cm) of the base of the cylinder, add space, then enter the height of the cylinder: ");
    scanf("%f %f", &radius, &height);
    volumeOfCylinder = PI * (radius * radius) * height;
    printf("\nThe radius is: %.1f cm\nThe height is: %.1f cm\nThe volume of the cylinder is %.1f cm³/%.1f ml", radius, height, volumeOfCylinder, volumeOfCylinder);
    return 0;
}
