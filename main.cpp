// #include <TXLib.h>
#include <stdio.h>
#include <windows.h>
#include <assert.h>

#include "app.h"
#include "test.h"
#include "color.h"
#include "utils.h"

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf(GRN "Meow world!\n\n" YEL);

    const char *testarg = "--test";
    bool istest = false;
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], testarg) == 0)
        {
            istest = true;
        }
    }

    if (istest)
    {
        alltest();
    }
    else
    {
        app();
    }

    printf(BRED "\n!!! COMMIT GITHUB !!!\n" reset);
    return 0;
}
