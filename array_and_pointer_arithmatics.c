#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 9090;
    int *ptr = &a;
    // //pointer arithmatic
    // printf("%d\n", &ptr);
    // printf("%d\n", ptr);
    // printf("%d\n", ++ptr);
    // printf("%d\n", ptr - 2);
    // printf("%d\n", *ptr);
    // //array and pointer

    // int *ptr = arr;
    // arr[i]=*(arr+i);
    //arr is a pointer to arr[0] then arr + i is a pointer to arr[i]

    int arr[] = {1, 2, 3, 4, 5};
    int *arrptr = arr;
    printf("the value at position 3 is %d\n", arr[3]);
    printf("the address of 1 st posotion is %d\n", &arr[0]);
    printf("the address of 2 st posotion is %d\n", &arr[1]);
    printf("the address of 1 st posotion is %d\n", arr + 1);
    arrptr++;
    printf("the value at position 3 is %d\n", *(arr));
    printf("the value of 1 st posotion is %d\n", *(&arr[0]));
    printf("the value of 2 st posotion is %d\n", *(&arr[1]));
    printf("the value of 1 st posotion is %d\n", *(arr + 1));
    return 0;
}
