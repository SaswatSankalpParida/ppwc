#include <stdio.h>
int main() {
    float length, width, area;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}
