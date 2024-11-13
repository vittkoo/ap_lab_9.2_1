#ifndef MACROS_H
#define MACROS_H

#include <stdio.h>

// ������� ��� ����������
#define MAX(a, b) (((a) > (b)) ? (a) : (b))          // ��������
#define SQUARE(x) ((x) * (x))                        // �������
#define ABS(x) (((x) < 0) ? -(x) : (x))              // ������ (����� �.)

// ������� ��� ��������� ����������
#define PRINTI(var) puts("Calculation result:"); \
    printf(#var " = %d\n", (int)(var))

#define PRINTR(var) puts("Calculation result:"); \
    printf(#var " = %.2f\n", (float)(var))

// ������ ��� ���������� w
#define CALCULATE_W(x, y, z) \
    ((z) > 3 ? MAX(SQUARE((x) - (z)), (x) - (y)) : (MAX((x) * (y), (y) * (z)) + MAX((z) * (x), (y) * (z))))

#endif // MACROS_H