#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    { // variable declared inside loop to take  different input everytime.
        int S, A, B, C;
        scanf("%d %d %d %d", &S, &A, &B, &C);
        int otsum = A + B + C;
        int missum = S - otsum;
        printf("%d\n", missum);
    }

    return 0;
}
