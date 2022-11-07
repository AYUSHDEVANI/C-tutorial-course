// nested for loop

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a numnber of n : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            printf("%d\n", i * j);
        }
    }

    return 0;
}