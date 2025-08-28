#ifndef FSOLVE_H_
#define FSOLVE_H_

#include <stdio.h>

#include "solver.h"

bool ScanEquation(FILE *test_file, Equation *eq);

void FileSolve(char *argv[]);

#endif