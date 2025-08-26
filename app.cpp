#include "app.h"

#include <stdio.h>

#include "solver.h"
#include "inputoutput.h"

void app() {
    bool run = true;
    while (run) {
        Equation eq = {};
        Solution sol = {};

        input(&eq);

        solve(eq, &sol);

        output(sol);

        printf("Напишите q если хотите выйти и что угодно, если не хотите: ");
        char quit_check = 0;
        if (scanf("\n%c", &quit_check) == 1) {
            if (quit_check == 'q') {
                run = false;
            }
        }
        clearbuffer();
    }
}
