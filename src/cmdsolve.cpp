#include "cmdsolve.h"

#include <stdlib.h>

#include "solver.h"
#include "inputoutput.h"

void CmdSolve(char *argv[])
{
    Equation eq = {
        .a = atoi(argv[2]),
        .b = atoi(argv[3]),
        .c = atoi(argv[4])};
    Solution sol = {};

    Solve(eq, &sol);

    Output(sol);
}