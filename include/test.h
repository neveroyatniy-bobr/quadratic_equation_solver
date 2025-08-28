#ifndef TEST_H_
#define TEST_H_

#include "solver.h"

struct Test
{
    Equation eq;
    Solution rightsol;
};

bool onetest(Test test);
void alltest();

#endif // TEST_H_
