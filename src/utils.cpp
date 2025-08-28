#include "utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "color.h"

bool myisnan(double x)
{
    return !(x == x);
}

bool myisinf(double x)
{
    return x == 1.0 / 0.0;
}

bool isequal(double a, double b)
{
    return fabs(a - b) < Epsilone;
}
