#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    char name[2][10];
    int marks[2][3];
    for (i = 0; i < 2; i++)
    {
        printf("enter the name of student\n");
        scanf("%s", name);
        for (j = 0; j < 3; j++)
        {
            // printf("enter the markssssssss of student\n");
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("name of the student %s\n", name[i][j]);
        for (j = 0; j < 3; j++)
            printf("the marks of student %d\n", marks[i][j]);
    }

    return 0;
}