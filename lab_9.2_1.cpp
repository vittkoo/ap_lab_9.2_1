#include <stdio.h>
#include <conio.h>
#include "macros.h"

void main() {
    float x, y, z, w;
    char ch;

    puts("Lab. Calculation of expression for w according to variant 7.");

    do {
        puts("Enter values for x, y, z:");
        scanf_s("%f %f %f", &x, &y, &z);

        w = CALCULATE_W(x, y, z);

#if (z > 3)
        puts("Condition: z > 3");
        PRINTR(w);
#else
        puts("Condition: z <= 3");
        PRINTR(w);
#endif

        puts("Repeat calculations? y/n");
        ch = _getch();
    } while (ch == 'y');
}
