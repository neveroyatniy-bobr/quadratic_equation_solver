#include "cmdargpr.h"

#include <string.h>

enum WorkingMode CmdArgProcessor(int argc, char *argv[])
{
    if (argc == 1)
    {
        return ui;
    }
    else
    {
        if (!strcmp(argv[1], "--test") || !strcmp(argv[1], "--t"))
        {
            return argc == 2 ? test : hint;
        }
        else if (!strcmp(argv[1], "--file") || !strcmp(argv[1], "--f"))
        {
            return argc == 3 ? file : hint;
        }
        else if (!strcmp(argv[1], "--cmdsolve") || !strcmp(argv[1], "--c"))
        {
            return argc == 5 ? cmd_sol : hint;
        }
        else if (!strcmp(argv[1], "--help") || !strcmp(argv[1], "--h"))
        {
            return argc == 2 ? help : hint;
        }
        else
        {
            return hint;
        }
    }
}