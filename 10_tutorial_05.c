// Program to calculate the grade of the student according to the specified marks.

#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your marks : ");
    scanf("%d", &mark);

    if (mark > 90 && mark <= 100)
    {
        printf("Your grade is   .....  A+");
    }

    else if (mark > 60 && mark <= 90)
    {
        printf("your grade is    .....B");
    }

    else if (mark > 40 && mark <= 60)
    {
        printf("Your grade is   ......C");
    }

    else if (mark > 30 && mark <= 40)
    {
        printf("Your grade is     .....D");
    }

    else
    {
        printf("Sorry  You are faild ");
    }
    return 0;
}