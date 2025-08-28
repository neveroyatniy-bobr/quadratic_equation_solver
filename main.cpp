#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "app.h"
#include "test.h"
#include "color.h"
#include "utils.h"

int main(int argc, char *argv[])
{
    printf(BLU "Meow world!\n\n" YEL);

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
