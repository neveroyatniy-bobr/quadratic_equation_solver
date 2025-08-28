#include "solver.h"

#include <math.h>

#include "utils.h"

void linearsolve(Equation eq, Solution *sol)
{
    if (isequal(eq.b, 0))
    {
        if (isequal(eq.c, 0))
        {
            sol->rcnt = inf;
        }
        else
        {
            sol->rcnt = root0;
        }
    }
    else
    {
        sol->rcnt = root1;
        sol->x1 = -eq.c / eq.b;
        sol->x2 = sol->x1;
    }
}

void quadraticsolve(Equation eq, Solution *sol)
{
    double D = eq.b * eq.b - 4 * eq.a * eq.c;
    if (D < 0)
    {
        sol->rcnt = root0;
    }
    else
    {
        if (isequal(D, 0))
        {
            sol->rcnt = root1;
            sol->x1 = -eq.b / (2 * eq.a);
            sol->x2 = sol->x1;
        }
        else
        {
            sol->rcnt = root2;
            double sqrtD = sqrt(D);
            sol->x1 = (-eq.b + sqrtD) / (2 * eq.a);
            sol->x2 = (-eq.b - sqrtD) / (2 * eq.a);
        }
    }
}

void solve(Equation eq, Solution *sol)
{
    if (isequal(eq.a, 0))
    {
        linearsolve(eq, sol);
    }
    else
    {
        quadraticsolve(eq, sol);
    }
}
