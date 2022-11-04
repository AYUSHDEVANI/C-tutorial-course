#include <stdio.h>

int main()

{

    int age;

    printf("Enter your age\n");

    scanf("%d", &age);

    printf("You entered your age %d \n", age);

    if (age >= 18)
    {
        printf("You can vote !");
    }

    else if (age >= 10)
    {
        printf("Your age between 10 to 18, you vote for kids");
    }

    else if (age >= 3)
    {
        printf("Your age between 3 to 10, you vote for babies");
    }

    else
    {
        printf("You cannot vote");
    }

    return 0;
}