#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("lets learn pointer:)\n");
    int a = 34;
    int *ptr; // *ptr stores value and ptr stores address
    ptr = &a; //we can write it as int *ptr = &a;

    printf("value of a is : %d\n", a);
    printf("address of &a is : %x\n", &a); //we can use %x,%p format specfier to print ponter
    printf("value of *ptr is :%d\n", *ptr);
    printf("address of ptr is : %x\n", ptr);
    int *ptr2 = NULL; // this is null pointer...it doesnt point to ny object or function
    printf("address of ptr2 is : %x\n", ptr2);
    return 0;
}
