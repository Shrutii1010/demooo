// #include <stdio.h>
// #include <conio.h>
// int main(int argc, char const *argv[])
// {
//     int h = 0, m = 0, s = 0;
//     clrscr();
//     printf("Enter the time in the form of  hh:mm:ss");
//     scanf("%d %d %d", &h, &m, &s);

// start:
//     for (h = 0; h < 12; h++)
//     {
//         for (m = 0; m < 60; m++)
//         {
//             for (s = 0; s < 60; s++)
//             {
//                 clrscr();
//                 printf(" %d %d %d ", h, m, s);
//                 if (h < 12)
//                 {
//                     printf("AM");
//                 }
//                 else
//                 {
//                     printf("PM");
//                 }
//                 for (double i = 0; i < 3619999; i++)
//                 {
//                     i++;
//                     i--;
//                 }
//             }
//             s = 0;
//         }
//         m = 0;
//     }
//     h = 0;
//     goto start;
//     getch();
//     return 0;
// }
#include <stdio.h>
#include <windows.h>
int main(int argc, char const *argv[])
{
    int h, m, s;
    int d = 1000;
    printf("set time:\n");
    scanf("%d %d %d ", &h, &m, &s);
    if (h > 24 || m > 60 || s > 60)
    {
        printf("Invalid operator\n");
        exit();
    }
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 24)

            h = 1;
    }
    printf("\n clock :");
    printf("\n %02d:%02d:%02d", h, m, s);
    sleep(d);
    system("cls");
}
