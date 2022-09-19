// Difference between “int main()” and “int main(void)” in C/C++

/*#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        printf("%d ", i);
        main(10);
    }
}*/

// #include <stdio.h>
// int main(void)
// {
//     static int i = 5;
//     if (--i)
//     {
//         printf("%d ", i);
//         main(10);
//     }
// }