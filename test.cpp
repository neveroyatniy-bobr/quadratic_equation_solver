#include "test.h"

#include <stdio.h>

#include "solver.h"
#include "utils.h"


bool onetest(Test test) {
    Solution mysol = {};
    solve(test.eq, &mysol);

    bool ans = true;
    if (mysol.rcnt == test.rightsol.rcnt) {
        if (mysol.rcnt == root1 || mysol.rcnt == root2) {
            if (!(isequal(mysol.x1, test.rightsol.x1)) || !(isequal(mysol.x2, test.rightsol.x2))) {
                ans = false;
            }
        }
    }
    else {
        ans = false;
    }

    return ans;
}

void alltest() {
    Test tests[] = {
        {.eq = {.a = 0, .b =  0, .c = 0 }, .rightsol = {.rcnt = inf,   .x1 =  0, .x2 =  0 }},
        {.eq = {.a = 0, .b =  0, .c = 1 }, .rightsol = {.rcnt = root0, .x1 =  0, .x2 =  0 }},
        {.eq = {.a = 0, .b = -2, .c = 4 }, .rightsol = {.rcnt = root1, .x1 =  2, .x2 =  2 }},
        {.eq = {.a = 1, .b =  1, .c = 1 }, .rightsol = {.rcnt = root0, .x1 =  0, .x2 =  0 }},
        {.eq = {.a = 1, .b =  2, .c = 1 }, .rightsol = {.rcnt = root1, .x1 = -1, .x2 = -1 }},
        {.eq = {.a = 1, .b =  3, .c = 2 }, .rightsol = {.rcnt = root2, .x1 = -1, .x2 = -2 }}
    };

    size_t testsize = sizeof(tests)/sizeof(tests[0]);
    for (size_t i = 0; i < testsize; i++) {
        if (onetest(tests[i])) {
            printf("OK\n");
        } else {
            printf("ERROR\n");
        }
    }
}
