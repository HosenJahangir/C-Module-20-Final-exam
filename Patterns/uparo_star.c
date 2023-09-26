#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
            if (i % 2 == 0) // to print even lines
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        printf("\n");
        space--;
        k = k + 2;
    }

    return 0;
}