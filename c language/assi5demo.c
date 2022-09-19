#include <stdio.h>

void *substring(char str1[], char str2[]);
int palindrome(char str[]);
int compare(char str1[], char str2[]);
void copy(char str1[], char str2[]);
void reverse(char str[]);
int main()
{
    int ch;
    char str1[20];
    char *pstr;
    char *substr;
    substr = NULL;
    pstr = string;
    while (1)
    {
        printf("MENU");
        printf("\n1.Substring Searching\n2.Check for Palindrome\n3.String Comparison\n4.Copy string\n5.Reverse String\n6.Quit");
        printf("\n\nEnter Your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter the string");
            scanf("%s", string);
            substr = substring(pstr);
            printf("%s", substr);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;

        default:
            printf("INVALID CHOICE ENTERED!!") break;
        }
    }

    return 0;
}
char *substring(char *str1)
{
    int start, end;
    unsigned int i;
    char substr[30];
    char *psubstr;
    psubstr = substr;
    int count = 0;
    printf("\n Enter start and end index for finding the substring");
    scanf("%d %d", &start, &end);
    for (i = 0; i < end; i++)
    {
        substring[count] = *(str1 + 1);
        count++;
    }
    return psubstr;
}
