#include <stdio.h>
#include <stdlib.h>

void area(); //function prototype

void area() {
    system("cls");

    char units[][20] = {"square meter", "square kilometer", "square centimeter", "square millimeter", "hectare", "acre", "square foot", "square yard", "square inch", "square mile"};
    double factor[] = {1, 0.000001, 10000, 1000000, 0.0001, 0.000247105, 10.7639, 1.19599, 1550.0, 0.0000003861};

    int from, to;
    double area;
    double convertedArea;

    title();

    printf("AREA UNIT CONVERTER\n");
    hr();
    printf("\n1. Square meter \t2. Square kilometer \t3. Square centimeter \n4. Square millimeter \t5. Hectare \t\t6. Acre \n7. Square foot \t\t8. Square yard \t\t9. Square inch \n10. Square mile \n\n");
    hr();
    make_unit_choice:
    printf("Enter unit to convert (from): ");
    scanf("%d", &from);
    hr();
    printf("Enter unit to convert (to): ");
    scanf("%d", &to);
    hr();

    // Checking unit choices
    if (from < 1 || from > 10 || to < 1 || to > 10) {
        printf("Invalid unit choices...\n");
        goto make_unit_choice;
    }

    printf("Conversion: %s to %s\n", units[from - 1], units[to - 1]);
    hr();

    // Taking area input
    printf("Enter area: ");
    scanf("%lf", &area);
    hr();

    // Conversion
    convertedArea = area * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.10lf %s\n\n", convertedArea, units[to - 1]);
    hr();
}
