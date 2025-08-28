#ifndef CMDARGPR_H_
#define CMDARGPR_H_

enum WorkingMode
{
    ui = 0,
    cmd_sol = 1,
    test = 2,
    file = 3,
    help = 4,
    hint = 5
};

enum WorkingMode CmdArgProcessor(int argc, char *argv[]);

#endif // CMDARGPR_H_