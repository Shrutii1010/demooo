// interesting Facts about Macros and Preprocessors in C

//#include<stdio.h>
// #define max 100
// int main()
// {
// 	printf("max is %d", max);
// 	return 0;
// }

// #include <stdio.h>
// #define INCREMENT(x) ++x
// int main()
// {
//     char *ptr = "GeeksQuiz";
//     int x = 10;
//     printf("%s ", INCREMENT(ptr));
//     printf("%d", INCREMENT(x));
//     return 0;
// }

// #include <stdio.h>
// #define MULTIPLY(a, b) a*b
// int main()
// {
// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
// 	printf("%d", MULTIPLY(2+3, 3+5));
// 	return 0;
// }
// Output: 16

// #include <stdio.h>
//here, instead of writing a*a we write (a)*(b)
// #define MULTIPLY(a, b) (a)*(b)
// int main()
// {
// 	// The macro is expanded as (2 + 3) * (3 + 5), as 5*8
// 	printf("%d", MULTIPLY(2+3, 3+5));
// 	return 0;
// }
// This code is contributed by Santanu

// #include <stdio.h>
// #define merge(a, b) a##b
// int main()
// {
// 	printf("%d ", merge(12, 34));
// }
//output=1234

// #include <stdio.h>
// #define PRINT(i, limit) while (i < limit) \
// 						{ \
// 							printf("GeeksQuiz "); \
// 							i++; \
// 						}
// int main()
// {
// 	int i = 0;
// 	PRINT(i, 3);
// 	return 0;
// }
// output=GeeksQuiz GeeksQuiz GeeksQuiz

// #include <stdio.h>

// #define square(x) x*x
// int main()
// {
// 	// Expanded as 36/6*6
// 	int x = 36/square(6);
// 	printf("%d", x);
// 	return 0;
// }
// output=36
// #include <stdio.h>

// int main()
// {
//     printf("Current File :%s\n", __FILE__);
//     printf("Current Date :%s\n", __DATE__);
//     printf("Current Time :%s\n", __TIME__);
//     printf("Line Number :%d\n", __LINE__);
//     return 0;
// }
// Current File :/usr/share/IDE_PROGRAMS/C/other/081c548d50135ed88cfa0296159b05ca/081c548d50135ed88cfa0296159b05ca.c
// Current Date :Sep  4 2019
// Current Time :10:17:43
// Line Number :8

// #include <stdio.h>
// #define LIMIT 1000
// int main()
// {
// printf("%d",LIMIT);
//removing defined macro LIMIT
// #undef LIMIT
//Declare LIMIT as integer again
// int LIMIT=1001;
// printf("\n%d",LIMIT);
// return 0;
// }
//  output= 1000
//          1001
