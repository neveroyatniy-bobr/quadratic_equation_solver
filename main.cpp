#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "app.h"
#include "test.h"
#include "color.h"
#include "utils.h"
#include "cmdargpr.h"
#include "cmdsolve.h"
#include "fsolve.h"

//проверка git

int main(int argc, char *argv[])
{
    printf(GRN "Meow world!\n\n" YEL);

    WorkingMode working_mode = (WorkingMode)0;
    working_mode = CmdArgProcessor(argc, argv);

    switch (working_mode)
    {
    case ui:
        App();
        break;

    case test:
        AllTest();
        break;

    case cmd_sol:
        CmdSolve(argv);
        break;

    case file:
        FileSolve(argv);
        break;

    case help:
        printf("--test, -t: вызвать юнит-тесты Solve()\n\
                --CmdSolve a b c, -c a b c: сразу решить уравнение с коэфицентами a, b, c\n\
                --file filename, -f filename: решить уравнения из файла\n");
        break;

    case hint:
        printf("Неправильные аргументы, используйте флаг --help или -h для информации об остальных флагах\n");
        break;
    
    default:
        printf("Ого......");
        break;
    }

    printf(GRN "\nThe end.\n" reset);
    return 0;
}
