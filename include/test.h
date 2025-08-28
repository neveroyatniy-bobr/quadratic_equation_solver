#ifndef TEST_H_
#define TEST_H_

#include <stdio.h>

#include "solver.h"

struct Test
{
    Equation eq;
    Solution rightsol;
};

bool scantest(FILE *testfile, Test *test);
bool onetest(Test test);
void alltest();

#endif // TEST_H_
