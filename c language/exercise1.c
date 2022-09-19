/*unit convesions
kms to miles
inches to foot
cms to inches
pounds to kg
inchrs to meter
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*int num;
    float mile, kilometer, inche, centimeter, pound, feet;

    printf("\nWhat type of conversion you want to choose:\n 1.kms to miles \n 2.inches to foot\n 3.cms to inches\n 4.pounds to kg\n enter the number:");
    scanf("%d", &num);

    mile = kilometer * 0.062137;
    inche = 1 / 12 * feet;
    centimeter = 1 / 2.54 * inche;
    pound = 0.45359237 * kilometer;

    switch (num)
    {
    case 1:
        printf("Convert kilometer into mile. \n Enter the kilometers =%f", kilometer);
        scanf("%f", &kilometer);
        printf("miles =%f", mile);
        break;

    default:
        printf("invalid number");
        break;
    }*/
    char input;
float kmToMiles = 0.621371;
float inchesToFeet =  0.0833333;
float cmsToInches = 0.393701;
float poundsToKg = 0.453592;
float inchesToMeters = 0.0254;
float first , second;
while(1)
    {
        printf("Enter the input chaacter . q to quit\n    1.kms to miles\n    2.inches to foot\n    3.cms to inches\n    4.pounds to kg\n    5.inchrs to meter\n");
        scanf("%c",&input);

        printf("Enter the quantit in the first unit\n");
        scanf("%f",&first);
           
        switch(input)
        {
            case 'q':
            printf("Quting the program....");
            goto end ;
            break;
            case '1':
            second = first * kmToMiles;
            printf("%f kms is equal to %f miles \n ",first , second);
            break;
            case '2':
            second = first * inchesToFeet;
            printf("%f inches is equal to %f foot \n ",first , second);
            break;
            case '3':
            second = first * cmsToInches;
            printf("%f cms is equal to %f inches\n ",first , second);
            break;
            case '4':
            second = first * poundsToKg;
            printf("%f pounds is equal to %f kgs\n ",first , second);
            break;
            case '5':
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters\n ",first , second);
            break;
            default :
            break;
        }
    }
    end:
    
    return 0;
}
