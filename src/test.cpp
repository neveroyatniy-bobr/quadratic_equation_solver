#include "test.h"

#include <stdio.h>

#include "solver.h"
#include "utils.h"

bool ScanTest(FILE *test_file, Test *test)
{
    return 6 == fscanf(
                    test_file,
                    "%lf %lf %lf %d %lf %lf",
                    &((test->eq).a),
                    &((test->eq).b),
                    &((test->eq).c),
                    (int*)&((test->right_sol).root_count),
                    &((test->right_sol).x1),
                    &((test->right_sol).x2));
}

bool OneTest(Test test)
{
    Solution my_sol = {};
    Solve(test.eq, &my_sol);

    bool ans = true;
    if (my_sol.root_count == test.right_sol.root_count)
    {
        if (my_sol.root_count == root1 || my_sol.root_count == root2)
        {
            if (!(IsEqual(my_sol.x1, test.right_sol.x1)) || !(IsEqual(my_sol.x2, test.right_sol.x2)))
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

void AllTest()
{
    FILE *test_file = fopen("data/tests.txt", "r");
    Test test = {};
    while (ScanTest(test_file, &test))
    {
        if (OneTest(test))
        {
            printf("OK\n");
        }
        else
        {
            printf("ERROR\n");
        }
    }
    fclose(test_file);
}
