#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[4];
    // printf("the value of marks array : \n");
    // marks[0] = 12;
    // marks[1] = 23;
    // marks[3] = 45;
    // marks[4] = 56;
    // printf("the value of marks[0] is : %d\n", marks[0]);
    // marks[0] = 90;
    // printf("the value new of marks[0] is : %d\n", marks[0]);

    // *************** ONE DIMENTIONAL ARRAY *************
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the %d value of array :\n", i);
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf(" the %d value of array is %d:\n", i, marks[i]);
    // }

    // *************** two DIMENTIONAL ARRAY *************
    int rollno[2][4]; //= {{23, 34, 5, 6}, {45, 56, 3, 33}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the rollno[%d][%d] value of array :\n", i, j);
            scanf("%d", &rollno[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the rollno[%d][%d] value of array : %d\n", i, j, rollno[i][j]);
        }
    }

    return 0;
}
