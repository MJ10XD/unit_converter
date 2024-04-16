#include <stdio.h>
#include <stdlib.h>

void mass() {
    system("cls");

    char units[][20] = {"Kilogram", "Gram", "Milligram", "Pound", "Ounce", "Metric ton"};
    double factor[] = {1, 1000, 1000000, 2.20462, 35.274, 0.001};

    int from, to;
    double mass;

    title();

    printf("MASS UNIT CONVERTER\n");
    hr();
    printf("\n1. Kilogram \t2. Gram \t3. Milligram \n4. Pound \t5. Ounce \t6. Metric ton \n\n");
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

    // Taking mass input
    printf("Enter mass: ");
    scanf("%lf", &mass);
    hr();

    // Conversion
    double convertedMass = mass * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.6lf %s\n\n", convertedMass, units[to - 1]);
    hr();
}

