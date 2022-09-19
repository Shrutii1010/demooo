#include <stdio.h>
int main
{

    int array[10], i, item;
    printf("Enter 10 elements in the array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter element to be searched0:");
    scanf("%d", &item);
    for (i = 0; i < 10; i++)
    {
        if (arrat[i] == item)
        {

            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("%d element found in %d location", item, i + 1);
    }
    else
    {
        printf("%d element not found ", item);
    }
}