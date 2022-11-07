// Program to print table for the given number using while loop

#include <stdio.h>
int main()
{
    int i = 0, number;

    printf("Enter a number to print table : ");
    scanf("%d", &number);

    while (i <= 10)
    {
        printf("%d\n", number * i);
        i++;
    }
    return 0;
}