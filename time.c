#include <stdio.h>
#include <stdlib.h>

void time(); //function prototype

void time() {
    system("cls");

    char units[][20] = {"Second", "Minute", "Hour", "Day", "Week", "Month", "Year"};
    double factor[] = {1, 60, 3600, 86400, 604800, 2628000, 31540000};

    int from, to;
    double time;

    title();

    printf("TIME UNIT CONVERTER\n");
    hr();
    printf("\n1. Second \t2. Minute \t3. Hour \n4. Day \t5. Week \t6. Month \t7. Year \n\n");
    hr();
    make_unit_choice:
    printf("Enter unit to convert (from): ");
    scanf("%d", &from);
    hr();
    printf("Enter unit to convert (to): ");
    scanf("%d", &to);
    hr();

    // Checking unit choices
    if (from < 1 || from > 7 || to < 1 || to > 7) {
        printf("Invalid unit choices...\n");
        goto make_unit_choice;
    }

    printf("Conversion: %s to %s\n", units[from - 1], units[to - 1]);
    hr();

    // Taking time input
    printf("Enter time: ");
    scanf("%lf", &time);
    hr();

    // Conversion
    double convertedTime = time * (factor[to - 1] / factor[from - 1]);

    printf("Result: %.6lf %s\n\n", convertedTime, units[to - 1]);
    hr();
}

