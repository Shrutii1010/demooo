/*
fibonacchi serirs 0 1 1 2 3 5 8 13 21......
*/
/*fib_recursive(int n)
 if n==1 or n==2:
 return n
 else :
 return fib_recursive(n-1) + fib_recursive(n-2)*/

#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);   //printing 0 and 1
    for (i = 2; i < number; ++i) //loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
/*#include<stdio.h>    
void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 }    */
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, t3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 1; i <= n; ++i)
    {
        t3 = t1 + t2;
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}
