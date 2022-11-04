// Program to find the largest number of the three

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Entered your three numbers are\n %d\n %d\n %d\n", a, b, c);

    if (a > b && a > c)
    {
        printf("%d is largest", a);
    }

    if (b > a && b > c)
    {
        printf("%d is largest", b);
    }

    if (c > a && c > b)
    {
        printf("%d is largest", c);
    }

    if (a == b && b == c)
    {
        printf("All are equal");
    }

    return 0;
}