#include "app.h"

#include <stdio.h>

#include "solver.h"
#include "inputoutput.h"

static bool run = true;

void TryToLeave()
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
    ClearBuffer();
}

void App()
{
    while (run)
    {
        Equation eq = {};
        Solution sol = {};

        Input(&eq);

        Solve(eq, &sol);

        Output(sol);

        TryToLeave();
    }

}
