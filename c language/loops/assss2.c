#include <stdio.h>
const int no_of_student=2;
const int no_of_sub =2;
void display(char name[no_of_student][10],int marks[no_of_student]);
int main(int argc, char const *argv[])
{
    int i, j;

    char name[no_of_student][10];
    int marks[no_of_student][no_of_sub];
    for (i = 0; i < no_of_student; i++)
    {
        printf("\nenter the name and marks of student\n",i+1);
        scanf("%s", name[i]);
        printf("enter the markssssssss of student\n",no_of_sub);
        for (j = 0; j < 3; j++)
        {
            //scanf("%s", name);
            
            scanf("%d", &marks[i][j]);
        }
    }
    display(name,marks);
    return 0;
}
void display(char name[no_of_student][10],int marks[no_of_student]);
{
  printf("Enter the information\n");
    for (i = 0; i < no_of_student; i++)
    {
       printf("\nname of the student %d is  %s\n",i+1, name[i]);
        for (j = 0; j <no_of_sub; j++)
            printf("the marks of student %d\n", marks[i][j]);
    }
    
    return 0;
}