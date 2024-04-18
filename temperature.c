#include <stdio.h>
#include <stdlib.h>

//function prototypes
void temperature();
void c2f(double);
void f2c(double);
void c2k(double);
void k2c(double);
//====================


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

void c2f(double x){
    double f = (x*9.0/5)+32;
    printf("result: %lf %cF\n",f,248);

}

void f2c(double x){
    double c = (x-32)*(5/9.0);
    printf("result: %lf %cC\n",c,248);
}

void c2k(double x){
    double k = x + 273.15;
    printf("result: %lf K\n",k);

}

void k2c(double x){
    double c = x - 273.15;
    printf("result: %lf %cC\n",c,248);
}