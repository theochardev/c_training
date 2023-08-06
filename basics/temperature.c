#include <stdio.h>
#define LOWER 0 /*lower limit of the table*/
#define UPPER 300 /*upper limit of the table*/
#define STEP 20 /*step size*/

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    char selection;

    printf("***********************\n");
    printf("Temperature converter\n");
    printf("***********************\n");
    printf("\nTo see temperatures in Celsius type: c\nTo see temperatures in Fahrenheit type: f\n");

    scanf("%c", &selection);

    if (selection == 'c')
    {
        fahr = LOWER;
        printf("*************\nTemperatures\n*************\n");
        while (fahr <= UPPER)
        {
            celsius = (5.0 / 9.0) * (fahr - 32.0);
            printf("%4.0f %6.1f\n", fahr, celsius);
            fahr = fahr + STEP;
        }
    }
    else if (selection == 'f')
    {
        celsius = LOWER;
        printf("*************\nTemperatures\n*************\n");
        while (celsius <= UPPER)
        {
            fahr = (celsius * (9.0 / 5.0)) + 32.0;
            printf("%4.0f %6.1f\n", celsius, fahr);
            celsius = celsius + STEP;
        }
    } else
    {
        printf("Wrong input");
    }

    return 0;
}