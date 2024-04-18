#include <stdio.h>
#include <stdlib.h>

void speed(); //function prototype

void speed() {
    system("cls");

    char units[][20] = {"Meter/second", "Kilometer/hour", "Mile/hour", "Foot/second", "Knot"};
    double factor[] = {1, 3.6, 2.23694, 3.28084, 1.94384};

    int from, to;
    double speed;

    title();

    printf("SPEED UNIT CONVERTER\n");
    hr();
    printf("\n1. Meter/second \t2. Kilometer/hour \t3. Mile/hour \n4. Foot/second \t5. Knot \n\n");
    hr();
    make_unit_choice:
    printf("Enter unit to convert (from): ");
    scanf("%d", &from);
    hr();
    printf("Enter unit to convert (to): ");
    scanf("%d", &to);
    hr();

    // Checking unit choices
    if (from < 1 || from > 5 || to < 1 || to > 5) {
        printf("Invalid unit choices...\n");
        goto make_unit_choice;
    }

    printf("Conversion: %s to %s\n", units[from - 1], units[to - 1]);
    hr();

    // Taking speed input
    printf("Enter speed: ");
    scanf("%lf", &speed);
    hr();

    // Conversion
    double convertedSpeed = speed * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.6lf %s\n\n", convertedSpeed, units[to - 1]);
    hr();
}
