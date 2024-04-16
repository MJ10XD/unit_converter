#include<stdio.h>
#include<stdlib.h>

void length(){
    system("cls");

    char units[][15]={"meter","kilometer","centimeter","millimeter","micrometer","nanometer","mile","yard","foot","inch"};
    double factor[] = {1, 0.001, 100, 1000, 1000000, 1000000000, 0.000621371, 1.09361, 3.28084, 39.3701};

    int from, to;
    double length;

    title();

    printf("LENGTH UNIT CONVERTER\n");
    hr();    //==================================
    printf("\n1. meters \t2. kilometer \t3. centimeter \n4. millimeter \t5. micrometer \t6. nanometer \n7. mile \t8. Yard \t9. foot \n10. inch \n\n");
    hr();    //==================================
    make_unit_choice:
    printf("enter unit to convert (from): ");
    scanf("%d",&from);
    hr();    //==================================
    printf("enter unit to convert (to): ");
    scanf("%d",&to);
    hr();    //==================================

    //checking unit choices..
    if(from > 10 || from < 1 || to > 10 || to < 1){
        printf("invalid unit choices ...");
        goto make_unit_choice;
    }

    printf("conversion: %s to %s\n",units[from-1],units[to-1]);

    hr();    //==================================
    //takng length input
    printf("enter length: ");
    scanf("%lf", &length);
    hr();    //==================================

    //conversion
    double convertedLength = length * (factor[to - 1] / factor[from - 1]);

    printf("\nresult: %lf %s\n\n",convertedLength,units[to-1]);
    hr();    //==================================

}