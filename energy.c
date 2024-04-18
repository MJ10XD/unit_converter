#include <stdio.h>
#include <stdlib.h>

void energy(); //function prototype

void energy() {
    system("cls");

    char units[][20] = {"Joule", "Kilojoule", "Calorie", "Kilocalorie", "Watt hour"};
    long double factor[] = {1, 0.001, 0.239006, 0.000239006, 0.000277778};

    int from, to;
    long double energy;

    title();

    printf("ENERGY UNIT CONVERTER\n");
    hr();
    printf("\n1. Joule \t2. Kilojoule \t3. Calorie \n4. Kilocalorie \t5. watt hour \n\n");
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

    // Taking energy input
    printf("Enter energy: ");
    scanf("%Lf", &energy);
    hr();

    // Conversion
    long double convertedEnergy = energy * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.6Lf %s\n\n", convertedEnergy, units[to - 1]);
    hr();
}

