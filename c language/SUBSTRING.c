#include <stdio.h>

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
int main()
{
    int ch;
    char str1[20];
    char *pstr;
    char *substr;
    substr = NULL;
    pstr = str1;
    while (1)
    {
        printf("MENU");
        printf("\n1.Substring Searching\n2.Check for Palindrome\n3.String Comparison\n4.Copy string\n5.Reverse String\n6.Quit");
        printf("\n\nEnter Your Choice:");
        scanf("%d", &ch);

        return 0;
    }
}

#include <stdio.h>

void substring(char *str);
void palindrome(char *str);
void reverse(char *str);
void compare(char *str1, char *str2);
void copy(char *str1, char *str2);

int main(void)
{

    int n;
    char str1[100];
    char str2[100];

    while (1)
    {
        printf("\n\n1.Substring \n2.Palindrome \n3.Reverse \n4.Compare\n5 Copy \n6.Exit");
        printf("\n\nEnter the choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:

            printf("\nEnter the string:");
            scanf("%s", str1);
            substring(str1);
            break;
        case 2:
            printf("\nEnter the string:");
            scanf("%s", str1);
            palindrome(str1);
            break;
        case 3:
            printf("Enter String : ");
            scanf("%s", str1);
            reverse(str1);
            break;
        case 4:
            printf("Enter String 1: ");
            scanf("%s", str1);
            printf("Enter String 2: ");
            scanf("%s", str2);
            compare(str1, str2);
            break;
        case 5:
            printf("Enter String 1: ");
            scanf("%s", str1);
            copy(str1, str2);
            break;
        case 6:
            return 0;
        default:
            printf("\nInvaild input!! Try Again");
            break;
        }
    }
}

void substring(char *str)
{
    int start, end, count = 0;
    char substr[20];
    printf("Entering the starting and ending point of substring:");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
    {
        substr[count] = *(str + 1);
        count++;
    }
    printf("\nSubstring is %s", substr);
}

void palindrome(char *str)
{
    int len = 0, flag = 1;
    while (str[len] != '\0')
        len++;

    int h = len - 1;
    int l = 0;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%s is palindrome", str);
    else
        printf("%s is Not Palindrome", str);
}

void reverse(char *str)
{
    char temp;
    int len = 0;
    while (str[len] != '\0')
        len++;

    int i = 0, j = len - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("\nReverse string is :%s", str);
}

void compare(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0')
        i++;
    if (str1[i] > str2[i] || str1[i] < str2[i])
        printf("They are not equal");
    else
        printf("They are equal");
}

void copy(char *str1, char *str2)
{

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';
    printf("\nCopied String is %s ", str2);
}
