#include "utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "color.h"

void assert(bool condition, const char *message) {
    if (!condition) {
        printf(RED "%s\n" reset, message);
        exit(0);
    }
}

bool isNAN(double x) {
    return !(x == x);
}

bool isINF(double x) {
    return x == 1.0 / 0.0;
}

bool isequal(double a, double b) {
    return fabs(a - b) < Epsilone;
}
