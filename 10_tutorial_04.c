// if esle if

#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    if (number == 10)
    {
        printf("Number is equal 10");
    }

    else if (number == 50)
    {
        printf("Number is equal 50");
    }

    else if (number == 100)
    {
        printf("Number is equal 100");
    }

    else
    {
        printf("Number is not equal 10, 50, 100 ");
    }
    return 0;
}