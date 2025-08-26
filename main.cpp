//#include <TXLib.h>
#include <stdio.h>
#include <windows.h>

#include "app.h"
#include "test.h"
#include "color.h"

int main(int argc, char *argv[]) {
    printf(GRN "Meow world!\n\n" YEL);

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const char *testarg = "--test";
    bool istest = false;
    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], testarg) == 0) {
            istest = true;
        }
    }

    if (istest) {
        alltest();
    } else {
        app();
    }

    printf(BRED "\n!!! COMMIT GITHUB !!!\n" reset);
    return 0;
}

//ansicolorcodes


