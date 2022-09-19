/*
- dynamic memory allocation is a way in which the size of a data sturcture can be changed during the runtime
- memory reuseibiltyi
- more efficient
- it broke in 4 segments
  1. code
  2.static/dynamic variables - data segment(initialized segment)
                             - bss segment (uninitaliz segment)
  3.stacks
  4.heap - dynami memory allocation

four functions to achieve this task:
 - malloc
 - calloc
 - realloc
 - free

 1) malloc = malloc stands for memory allocation 
             all values of memory are garbage value
             syntax = ptr = (pre-type* )malloc(size_in_bytes)

 2) calloc = calloc stands for contiguous allocation
             all values at allocated memory are initilized to 0
             syntax = ptr = (pre-type* )calloc(n,size_in_bytes)

 3) realloc = stands for reallocation
              if the dyamically allocated memory is insufficient we can change the size of previously allocated memory using realloc function
              syntax = ptr = (ptr-type*)realloc (ptr,new_size_in_byte)

 4) free = it is used to free allocated memory
            this free the memory in heap used by proram
            syntax = free(ptr)
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{

    //use of malloc
    int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of %d of this array :\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}
