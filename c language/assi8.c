
#include <stdio.h>
#include <stdlib.h>

typedef struct cricket
{
    char name[15], country[15], category[15];
    int age, odi, twenty, batscore, wkts;
} cricket;

int main()
{
    cricket s[10]; //variable declaration of user defined datatype
    int i, n, option, cntr, index;
    char cntry[15], nm[15];

    printf("\n ** Program in C for a cricket players display board **\n");

    printf("\nEnter the number of players :");
    scanf("%d", &n);

    printf("\n Enter data of %d players\n", n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter name of the player: ");
        scanf("%s", &s[i].name);
        printf("\n Enter age of the player: ");
        scanf("%d", &s[i].age);
        printf("\n Enter country of the player: ");
        scanf("%s", s[i].country);
        printf("\n Enter category of the player: ");
        scanf("%s", s[i].category);
        printf("\n Enter Number of ODIs played:");
        scanf("%d", &s[i].odi);
        printf("\n Enter Number of International 20-20s played :");
        scanf("%d", &s[i].twenty);
        printf("\n Enter Average batting score: ");
        scanf("%d", &s[i].batscore);
        printf("\n Enter Total number of wickets taken :");
        scanf("%d", &s[i].wkts);
    }
    //To display data
    do
    {
        printf("\n\nPerform following queries \n1) Number of batsman of a particular country \n");
        printf("2) Batsman with highest average score \n");
        printf("3) Number of bowlers of a particular country \n");
        printf("4) Bowler that has taken maximum no of wickets \n");
        printf("5) Show a particular players entire -Display board information \n");
        printf("6) Exit \n");
        printf("Enter suitable option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            cntr = 0;
            printf("\nEnter country to display number of batsman: ");
            scanf("%s", cntry);
            for (i = 0; i < n; i++)
            {
                if ((strcmp(cntry, s[i].country) == 0) && (strcmp("batsman", s[i].category) == 0))
                    cntr++;
            }
            printf("\nNumber of batsman of a %s country= %d ", cntry, cntr);
            break;
        case 2:
            cntr = 0;
            index = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp("batsman", s[i].category) == 0)
                {
                    if (s[i].batscore > cntr)
                    {
                        cntr = s[i].batscore;
                        index = i;
                    }
                }
            }
            printf("\n Name of Batsman with highest average score is %s\n", s[index].name);
            break;

        case 3:
            cntr = 0;
            printf("\nEnter country to display number of bowlers: ");
            scanf("%s", cntry);
            for (i = 0; i < n; i++)
            {
                if ((strcmp(cntry, s[i].country) == 0) && (strcmp("bowler", s[i].category) == 0))
                    cntr++;
            }
            printf("\nNumber of bowlers of a %s country= %d ", cntry, cntr);
            break;
        case 4:
            cntr = 0;
            index = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp("bowler", s[i].category) == 0)
                {
                    if (s[i].wkts > cntr)
                    {
                        cntr = s[i].wkts;
                        index = i;
                    }
                }
            }
            printf("\n Name of Bowler who has taken maximum no of wickets is %s\n", s[index].name);
            break;
        case 5:
            printf("\n Enter Name of player to display data ");
            scanf("%s", nm);
            for (i = 0; i < n; i++)
            {
                if (strcmp(nm, s[i].name) == 0)
                {
                    printf("name \tcountry \tcategory \tage \todi \t20-20s \tbatscore \twkts\n");
                    printf("%s \t%s \t%s \t%d ", s[i].name, s[i].country, s[i].category, s[i].age);
                    printf("\t%d \t%d \t%d \t%d\n", s[i].odi, s[i].twenty, s[i].batscore, s[i].wkts);
                }
            }
            break;
        }
    } while (option != 6);
    return 0;
}
