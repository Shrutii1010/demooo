#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n ", i, array[i]);
    }
    array[0] = 435; //if we change any value here,it gets refleced in main()
}
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n ", i, ptr[i]);
        // or
        printf("the value at %d is %d\n ", i, *(ptr + 1));
    }
    *(ptr + 2) = 3332;
}
int main(int argc, char const *argv[])
{
    /* 
    we can pass the arry to the function:
    1. by declaring array as a parameter in the function
    2.by declaring a pointer in the function to hold the base address of the array
    */

    int arr[] = {23, 2, 4, 55, 3};
    // printf("the alue at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("the alue at index 0 is %d\n", arr[0]);
    func2(arr);
    func2(arr);
    return 0;
}
