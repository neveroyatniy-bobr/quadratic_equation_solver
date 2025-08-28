#include "cmdargpr.h"

#include <string.h>

enum WorkingMode CmdArgProcessor(int argc, char *argv[])
{
    if (!strcmp(argv[0], "--test") || !strcmp(argv[0], "--t"))
    {
        if (argc == 2)
        {
            return test;
        }
        else
        {
            return hint;
        }
    }
    else if (!strcmp(argv[0], "--file") || !strcmp(argv[0], "--f"))
    {
        if (argc == 3)
        {
            return file;
        }
        else
        {
            return hint;
        }
    }
    else if (!strcmp(argv[0], "--CmdSolve") || !strcmp(argv[0], "--c"))
    {
        if (argc == 5)
        {
            return cmd_sol;
        }
        else
        {
            return hint;
        }
    }
    else if (!strcmp(argv[0], "--help") || !strcmp(argv[0], "--h"))
    {
        if (argc == 2)
        {
            return help;
        }
        else
        {
            return hint;
        }
    }
    else
    {
        if (argc == 1)
        {
            return ui;
        }
        else
        {
            return help;
        }
    }
}