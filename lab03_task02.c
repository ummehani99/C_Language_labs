#include <stdio.h>

int main()
{
    int i, n, j = 0;
    printf("\t\tEnter Table No: ");
    scanf("%d", &n);

    if (n >= 2 && n <= 20)
    {
        for (i = 1; i <= 12; i++)
        {
            j = n * i;
            printf("\n\t\t%d * %d = %d", n, i, j);
        }
    }
    else
    {
        printf("\nError!!! Enter number from 2 to 20");
    }

    return 0;
}
