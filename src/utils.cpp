#include "utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>

#include "color.h"

bool myisnan(double x)
{
    return !(x == x);
}

bool myisinf(double x)
{
    double INF = INFINITY;
    return memcmp(&x, &INF, sizeof(double));
}

bool isequal(double a, double b)
{
    return fabs(a - b) < Epsilone;
}
