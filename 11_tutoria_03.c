//  C program that implements a calculator that does the below

#include <stdio.h>

int main(void)
{
    int a, b;
    char operator;

    printf("Enter the operator(+,-,*,/)\n");
    scanf("%c", &operator);

    printf("Enter the two input\n");
    scanf("%d%d", &a, &b);

    switch (operator)
    {
    case '+':
        printf("Addition of %d and %d is : %d\n", a, b, a + b);
        break;

    case '-':
        printf("Substriction between %d and %d is : %d\n", a, b, a - b);
        break;

    case '*':
        printf("Multiplication between %d and %d is : %d\n", a, b, a * b);
        break;

    case '/':
        printf("Devide %d by %d is : %d\n", a, b, a / b);
        break;

    default:
        printf("%c is not valid operator\n", operator);

        break;
    }

    return 0;
}