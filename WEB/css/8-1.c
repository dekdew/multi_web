#include <stdio.h>


struct student_info
{
    char name[50];
};

int main()
{
    struct student_info rec;
    scanf("%s", rec.name);
    printf("%s\n", rec.name[0]);

    return 0;
}