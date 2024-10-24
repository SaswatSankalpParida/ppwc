#include <stdio.h>
int main() {
    float num1, num2, division;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    if (num2 != 0) {
        division = num1 / num2;
        printf("The division of %.2f by %.2f is: %.2f\n", num1, num2, division);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
    return 0;
}
