#include <stdio.h>
int main()
{
    char a[1001]; // size including null
    fgets(a, 1000, stdin);
    int i = 0;
    int capital = 0;
    int small = 0;
    int space = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            capital++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            small++;
        }
        else
        {
            space++;
        }
        i++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, space);

    return 0;
}