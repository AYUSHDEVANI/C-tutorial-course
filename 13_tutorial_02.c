// The Sum of N digits program using the do while

#include <stdio.h>

int main()
{
    int num, total;
    int i = 1;
    int sum = 0;

    printf("How many number you want to  add : ");
    scanf("%d", &total);

    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        sum += num;

        i++;

    } while (i <= total);

    printf("Sum = %d", sum);

    return 0;
}