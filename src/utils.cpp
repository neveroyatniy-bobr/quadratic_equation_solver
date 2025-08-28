#include "utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <memory.h>

#include "color.h"

void Assert(bool condition, const char *file, int line)
{
    if (!condition)
    {
        printf(RED "Assertation error in %s %d\n" reset, file, line);
        abort();
    }
}

bool MyIsNan(double x)
{
    return !(x == x);
}

bool MyIsInf(double x)
{
    double INF = INFINITY;
    return memcmp(&x, &INF, sizeof(double));
}

bool IsEqual(double a, double b)
{
    return fabs(a - b) < EPSILONE;
}
