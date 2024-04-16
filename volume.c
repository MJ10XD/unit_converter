#include <stdio.h>
#include <stdlib.h>

void volume() {
    system("cls");

    char units[][20] = {"Cubic meter", "Liter", "Milliliter", "Cubic foot", "Cubic inch", "Cubic centimeter"};
    double factor[] = {1, 1000, 1000000, 35.3147, 61023.7, 1000000};

    int from, to;
    double volume;

    title();

    printf("VOLUME UNIT CONVERTER\n");
    hr();
    printf("\n1. Cubic meter \t2. Liter \t3. Milliliter \n4. Cubic foot \t5. Cubic inch \t6. Cubic centimeter \n\n");
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

    // Taking volume input
    printf("Enter volume: ");
    scanf("%lf", &volume);
    hr();

    // Conversion
    double convertedVolume = volume * (factor[to - 1] / factor[from - 1]);

    printf("\nResult: %.6lf %s\n\n", convertedVolume, units[to - 1]);
    hr();
}

