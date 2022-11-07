// Program to print table for the given number using do while loop

#include <stdio.h>
int main()
{
    int i = 1, number;

    printf("Enter the value of you want to print table : ");
    scanf("%d", &number);

    do
    {
        printf("%d\n", number * i);
        i++;
    } while (i <= 10);

    return 0;
}