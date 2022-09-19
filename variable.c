
//static variable

// #include <stdio.h>
// void function()
// {
//     int x = 20;        //local variable
//     static int y = 30; //static variable
//     x = x + 10;
//     y = y + 10;
//     printf("\n%d,%d", x, y);
// }
// int main()
// {

//     function();
//     function();
//     function();
//     return 0;
// }
// Output
// 30,40
// 30,50
// 30,60
// local variable will always print same value whenever function will be called whereas static variable will print the incremented value in each function call.

//auto variable
#include <stdio.h>
void function()
{
    int x = 10;      //local variable (also automatic)
    auto int y = 20; //automatic variable
    printf("%d %d ", x, y);
}
int main()
{

    function();
    return 0;
}

//external variable
// myfile.h

//   extern int x=10;//external variable (also global)

//   program1.c
//   #include "myfile.h"
//   #include <stdio.h>
//   void printValue(){
//   printf("Global variable: %d", global_variable);
//   }