#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i = N; i >= 1; i--)
    {
        // following for loop Prints first part of pattern
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // following for loop will Prints spaces between two parts
        for(j = i * 2; j < N * 2; j++)
        {
            printf(" ");
        }

        // following for loop is for Printing the second part of the pattern
        for(j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
