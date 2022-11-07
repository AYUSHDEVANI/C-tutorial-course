// Print table for the given number

#include <stdio.h>
int main()
{
    int i, number = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", number * i);
    }
    return 0;
}