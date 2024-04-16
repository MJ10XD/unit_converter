//header files
#include<stdio.h>
#include<stdlib.h>

//modules
#include "title.c"
#include "length.c"
#include "area.c"
#include "mass.c"
#include "temperature.c"
#include "volume.c"
#include "speed.c"
#include "pressure.c"
#include "energy.c"

int main(){
    system("cls");

    // variable declaration part 
    int choice;

    title();
    
    printf("\n\n1. length \t2. area \t3. mass \n4. temperature \t5. volume \t6. speed \n7. time \t8. pressure \t9. energy\n\n");

    quantity_selection:

    hr();
    printf("choose one of the above: ");
    scanf("%d",&choice);
    hr();

    switch (choice)
    {
    case 1:
        length();
        break;
    
    case 2:
        area();
        break;

    case 3:
        mass();
        break;

    case 4:
        temperature();
        break;

    case 5:
        volume();
        break;

    case 6:
        speed();
        break;

    case 7:
        time();
        break;

    case 8:
        pressure();
        break;

    case 9:
        energy();
        break;

    default:
        printf("choice invalid . . . .\n");
        goto quantity_selection;
        break;
    }

return 0;
}