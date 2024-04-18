#include <stdio.h>
#include <stdlib.h>

void pressure(); //function prototype

void pressure() {
    system("cls");

    char units[][20] = {"Pascal", "Kilopascal", "Megapascal", "Bar", "Atm", "mm Hg"};
    double factor[] = {1, 0.001, 0.000001, 0.00001, 0.0000098692, 0.00750062};

    int from, to;
    double pressure;

    title();

    printf("PRESSURE UNIT CONVERTER\n");
    hr();
    printf("\n1. Pascal \t2. Kilopascal \t3. Megapascal \n4. Bar \t5. Atm \t6. mm Hg \n\n");
    hr();
    make_unit_choice:
    printf("Enter unit to convert (from): ");
    scanf("%d", &from);
    hr();
    printf("Enter unit to convert (to): ");
    scanf("%d", &to);
    hr();

    // Checking unit choices
    if (from < 1 || from > 6 || to < 1 || to > 6) {
        printf("Invalid unit choices...\n");
        goto make_unit_choice;
    }

    printf("Conversion: %s to %s\n", units[from - 1], units[to - 1]);
    hr();

    // Taking pressure input
    printf("Enter pressure: ");
    scanf("%lf", &pressure);
    hr();

    // Conversion
    double convertedPressure = pressure * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.6lf %s\n\n", convertedPressure, units[to - 1]);
    hr();
}

