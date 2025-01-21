#include <stdio.h>

#define AREA_CIRCLE(radius) (3.14159 * (radius) * (radius))

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = AREA_CIRCLE(radius);

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
