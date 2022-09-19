#include <stdio.h>

int x = 0;
int f()
{
    return x;
}
int g()
{
    int x = 1;
    return f();
}
int main()
{
    printf("%d", g());
    printf("\n");
    getchar();
}
// output==0

// C program to illustrate the global scope

// #include <stdio.h>

// // Global variable
// int global = 5;

// // global variable accessed from
// // within a function
// void display()
// {
// 	printf("%d\n", global);
// }

// // main function
// int main()
// {
// 	printf("Before change within main: ");
// 	display();

// 	// changing value of global
// 	// variable from main function
// 	printf("After change within main: ");
// 	global = 10;
// 	display();
// }

// output==Before change within main: 5
// After change within main: 10
