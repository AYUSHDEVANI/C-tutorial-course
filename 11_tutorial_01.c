// switch case

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 18:
        printf("Your age is 18\n");
        switch (marks)
        {
        case 80:
            printf("Your marks 80\n");
            break;

        default:
            printf("Your marks are not 80\n");
            break;
        }
        break;
    case 28:
        printf("Your age is 28");
        break;

    case 38:
        printf("Your age is 38");
        break;

    default:
        printf("Age is note 18, 28 and 38");
        break;
    }

    return 0;
}