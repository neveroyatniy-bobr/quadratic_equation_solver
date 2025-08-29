#ifndef CMDARGPR_H_
#define CMDARGPR_H_

/**
\file cmdargpr.h
\brief Содержит определения для обработки аргументов командной строки
*/

/// @brief Означает режим работы приложения
enum WorkingMode
{
    ui = 0,
    cmd_sol = 1,
    test = 2,
    file = 3,
    help = 4,
    hint = 5,
    gui = 6
};

/// @brief Вычисляет режим работы приложения в зависимости от аргументов командной строки
/// @return Возвращает режим работы приложения в зависимости от аргументов командной строки
enum WorkingMode CmdArgProcessor(int argc, char *argv[]);

#endif // CMDARGPR_H_