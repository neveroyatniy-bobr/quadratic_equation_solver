#include "solver.h"

#include <math.h>

#include "utils.h"

void LinearSolve(Equation eq, Solution *sol)
{
    if (IsEqual(eq.b, 0))
    {
        if (IsEqual(eq.c, 0))
        {
            sol->root_count = inf;
        }
        else
        {
            sol->root_count = root0;
        }
    }
    else
    {
        sol->root_count = root1;
        sol->x1 = -eq.c / eq.b;
        sol->x2 = sol->x1;
    }
}

void QuadraticSolve(Equation eq, Solution *sol)
{
    double D = eq.b * eq.b - 4 * eq.a * eq.c;
    if (D < 0)
    {
        sol->root_count = root0;
    }
    else
    {
        if (IsEqual(D, 0))
        {
            sol->root_count = root1;
            sol->x1 = -eq.b / (2 * eq.a);
            sol->x2 = sol->x1;
        }
        else
        {
            sol->root_count = root2;
            double sqrt_D = sqrt(D);
            sol->x1 = (-eq.b + sqrt_D) / (2 * eq.a);
            sol->x2 = (-eq.b - sqrt_D) / (2 * eq.a);
        }
    }
}

void Solve(Equation eq, Solution *sol)
{
    if (IsEqual(eq.a, 0))
    {
        LinearSolve(eq, sol);
    }
    else
    {
        QuadraticSolve(eq, sol);
    }
}
