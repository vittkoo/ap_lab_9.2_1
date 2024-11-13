#ifndef MACROS_H
#define MACROS_H

#include <stdio.h>

// Макроси для обчислення
#define MAX(a, b) (((a) > (b)) ? (a) : (b))          // максимум
#define SQUARE(x) ((x) * (x))                        // квадрат
#define ABS(x) (((x) < 0) ? -(x) : (x))              // модуль (дійсне ч.)

// Макроси для виведення результату
#define PRINTI(var) puts("Calculation result:"); \
    printf(#var " = %d\n", (int)(var))

#define PRINTR(var) puts("Calculation result:"); \
    printf(#var " = %.2f\n", (float)(var))

// Макрос для обчислення w
#define CALCULATE_W(x, y, z) \
    ((z) > 3 ? MAX(SQUARE((x) - (z)), (x) - (y)) : (MAX((x) * (y), (y) * (z)) + MAX((z) * (x), (y) * (z))))

#endif // MACROS_H