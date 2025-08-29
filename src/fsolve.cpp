#include "fsolve.h"

#include <stdio.h>

#include "solver.h"
#include "inputoutput.h"

bool ScanEquation(FILE *test_file, Equation *eq)
{
    return 3 == fscanf(
                    test_file,
                    "%lf %lf %lf",
                    &(eq->a),
                    &(eq->b),
                    &(eq->c));
}

void FileSolve(char *argv[])
{
    FILE *test_file = fopen(argv[2], "r");
    Equation eq = {};
    while (ScanEquation(test_file, &eq))
    {
        Solution sol;
        Solve(eq, &sol);

        Output(sol);
    }
    fclose(test_file);
}