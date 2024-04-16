#include <stdio.h>
#include <stdlib.h>

void temperature() {
    system("cls");

    int choice;
    double temp;

    title();

    printf("TEMPERATURE UNIT CONVERTER\n");
    make_choice:
    hr();
    printf("\n1. Celsius to farenheit");
    printf("\n2. farenheit to celsius");
    printf("\n3. Celsius to kelvin");
    printf("\n4. kelvin to celsius\n");
    hr();
    printf("choose one of the above: ");
    scanf("%d",&choice);
    hr();

    //validating choice
    if(choice<1 && choice > 4){
        printf("invalid choice ...\n");
        goto make_choice;
    }

    // Taking temperature input
    printf("Enter temperature: ");
    scanf("%lf", &temp);
    hr();

    switch (choice)
    {
    case 1:
        c2f(temp);
        break;

    case 2:
        f2c(temp);
        break;

    case 3:
        c2k(temp);
        break;

    case 4:
        k2c(temp);
        break;

    default:
        printf("something went wrong . . ");
        break;
    }  

    
}

//under developement