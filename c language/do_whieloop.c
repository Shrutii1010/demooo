// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i, j;
//     char name[2][10];
//     int marks[2][3];
//     for (i = 0; i < 2; i++)
//     {
//         printf("enter the name of student\n");
//         scanf("%c", &name[i][j]);
//         for (j = 0; j < 3; j++)
//         {
//             printf("enter the markssssssss of student\n");
//             scanf("%d", &marks[i][j]);
//         }
//     }
//     for (i = 0; i < 2; i++)
//     {
//         printf("name of the student %c", name[i][j]);
//         for (j = 0; j < 3; j++)
//             printf("the marks of student %d", marks[i][j]);
//     }

//     return 0;
// }
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    char name[2][10];
    int marks[2][3];
    for (i = 0; i < 2; i++)
    {
        //printf("\n\nenter the name of student\n", i++);
        // scanf("%c", &name[i][j]);
        for (j = 0; j < 3; j++)
        {
            gets(name);
            //scanf("%c", &name[i][j]);
            //printf("\n\nenter the markssss of student\n");
            //scanf("%c", &name[i][j]);
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nname of the student %c\n", name[i][j]);
        for (j = 0; j < 3; j++)
            printf("the marks of student %d\n", marks[i][j]);
    }

    return 0;
}