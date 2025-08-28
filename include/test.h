#ifndef TEST_H_
#define TEST_H_

#include <stdio.h>

#include "solver.h"

struct Test
{
    Equation eq;
    Solution right_sol;
};

bool ScanTest(FILE *test_file, Test *test);

bool OneTest(Test test);

void AllTest();

#endif // TEST_H_
