#include<stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);
    float num3 = num2 * 1.0 / num1;

    printf("The quotient is: %f\n", num3);
    printf("Remainder: %d", num2 % num1);
}