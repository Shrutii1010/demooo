#include <stdio.h>

struct complex
{
    int real;
    int imag;
} a, b, c;

struct complex read(void);
void write(struct complex);
struct complex writecomplex(struct complex);
struct complex addcomplex(struct complex, struct complex);
struct complex mulcomplex(struct complex, struct complex);

int main()
{

    struct complex c1, c2, csum, cmul;
    int choice;
    while (1)
    {
        printf("\n\nPerform following operations: \n1.Addition of two complex number\n2.Multipication of two complex number\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the first complex number:");
            c1 = read();
            write(c1);
            printf("Enter the second complex number:");
            c2 = read();
            write(c2);
            printf("Addition\n ");
            csum = addcomplex(c1, c2);
            write(c);

            break;
        case 2:
            printf("\nEnter the first complex number:");
            c1 = read();
            write(c1);
            printf("Enter the second complex number:");
            c2 = read();
            write(c2);
            printf("Multipication\n ");
            cmul = mulcomplex(c1, c2);
            write(c);
            break;
        default:
            printf("wrong input!!");
            break;
        }
    }
}
struct complex read(void)
{
    struct complex n1;
    printf("\nEnter real part of complex number");
    scanf("%d", &n1.real);
    printf("\nEnter imaginary part of complex number");
    scanf("%d", &n1.imag);
    return n1;
}
void write(struct complex c1)
{
    printf("Complex number  is\n");
    printf(" %d + i %d", c1.real, c1.imag);
    printf("\n");
}
struct complex addcomplex(struct complex c1, struct complex c2)
{
    struct complex csum;
    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;
    printf(" %d + i %d", csum.real, csum.imag);
    return csum;
}
struct complex mulcomplex(struct complex c1, struct complex c2)
{
    struct complex cmul;
    cmul.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    cmul.imag = (c1.imag * c2.real) + (c1.real * c2.imag);

    return cmul;
}

/*
#include <stdio.h>
#include <conio.h>
struct complex
{
   float real, imag;
}a, b, c;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex sub(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);
   struct complex div(struct complex, struct complex);
void main ()
{
   clrscr();
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);
   printf("Enter  the 2nd complex number\n");
   b = read();
   write(b);
   printf("Addition\n ");
   c = add(a, b);
   write(c);
   printf("Substraction\n ");
   c = sub(a, b);
   write(c);
   printf("Multiplication\n");
   c = mul(a, b);
   write(c);
   printf("Division\n");
   c = div(a, b);
  write(c);
  getch();
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}
void write(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}
struct complex sub(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real - q.real);
   t.imag = (p.imag - q.imag);
   return t;
}
struct complex mul(struct complex p, struct complex q)
{
   struct complex t;
   t.real=(p.real * q.real) - (p.imag * q.imag);
   t.imag=(p.real * q.imag) + (p.imag * q.real);
   return t;
}
struct complex div(struct complex p, struct complex q)
{
   struct complex t;
   t.real = ((p.imag * q.real) - (p.real * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   t.imag = ((p.real * q.real) + (p.imag * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   return(t);
}
Input & Output:
Enter the real part
2
Enter the imaginary part 
4
Complex number is
2.0 + i4.0
Enter the real part 
4
Enter the imaginary part
2
Complex number is
4.0 + i2.0
Addition
Complex number is 
6.0 + i6.0
Subtraction
Complex number is 
-2.0 + i2.0
Multiplication
Complex number is 
0.0 + i20.0
Division
Complex number is
0.6 + i0.8
*/