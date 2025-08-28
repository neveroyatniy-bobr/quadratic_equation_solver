#include "test.h"

#include <stdio.h>

#include "solver.h"
#include "utils.h"

bool scantest(FILE *testfile, Test *test)
{
    return 6 == fscanf(
                    testfile,
                    "%lf %lf %lf %d %lf %lf",
                    &((test->eq).a),
                    &((test->eq).b),
                    &((test->eq).c),
                    (int*)&((test->rightsol).rcnt),
                    &((test->rightsol).x1),
                    &((test->rightsol).x2));
}

bool onetest(Test test)
{
    Solution mysol = {};
    solve(test.eq, &mysol);

    bool ans = true;
    if (mysol.rcnt == test.rightsol.rcnt)
    {
        if (mysol.rcnt == root1 || mysol.rcnt == root2)
        {
            if (!(isequal(mysol.x1, test.rightsol.x1)) || !(isequal(mysol.x2, test.rightsol.x2)))
            {
                ans = false;
            }
        }
    }
    else
    {
        ans = false;
    }

    return ans;
}

void alltest()
{
    FILE *testfile = fopen("data/tests.txt", "r");
    Test test = {};
    while (scantest(testfile, &test))
    {
        if (onetest(test))
        {
            printf("OK\n");
        }
        else
        {
            printf("ERROR\n");
        }
    }
    fclose(testfile);
}
