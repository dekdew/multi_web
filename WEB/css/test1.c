#include <stdio.h>

int main()
{
    char name[60], set[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%s", name);
        set[i]=name;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%s\n", set[i]);
    }
    return 0;
}