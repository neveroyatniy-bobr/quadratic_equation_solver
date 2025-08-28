#include "app.h"

#include <stdio.h>

#include "solver.h"
#include "inputoutput.h"

static bool run = true;

void try_to_leave()
{
    printf("Нажмите q если хотете выйти и что угодно, если нет: ");
    char quit_check = 0;
    if (scanf("\n%c", &quit_check) == 1)
    {
        if (quit_check == 'q')
        {
            run = false;
        }
    }
    clearbuffer();
}

void app()
{
    while (run)
    {
        Equation eq = {};
        Solution sol = {};

        input(&eq);

        solve(eq, &sol);

        output(sol);

        try_to_leave();
    }

}
