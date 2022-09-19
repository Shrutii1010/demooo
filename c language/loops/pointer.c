#include <stdio.h>
int main()
{
    int a = 30; //initial variable
    int *pa;    //initial pointer
    pa = &a;    //declare pointer

    printf("\nvalue of the variable a is %d", a);
    printf("\nAddress of the variable a is %u", pa);
    printf("\n size of the variable a is %d", sizeof(a));

    printf("\nAddress of the variable a is %u\n", *pa);
    return 0;
}