#include <stdio.h>
int main()

{
    int n;
    int tiger = 0;
    int pathan = 0;
    scanf("%d", &n);
    // scanf ends here
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);

        if (x1 > x2)
        {
            tiger++;
        }
        if (x1 < x2)
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }

    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}
