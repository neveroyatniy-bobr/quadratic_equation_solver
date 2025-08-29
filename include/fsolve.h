#ifndef FSOLVE_H_
#define FSOLVE_H_

#include <stdio.h>

#include "solver.h"

/**
\file fsolve.h
\brief Содержит определения для решения уравнений из файла
*/

/// @brief Считывает уравнение из файла в виде: "a b c"
/// @param test_file Указатель на файл, из которого считывать
/// @param eq Указатель на уравнение, в которое записать значения
/// @return 
bool ScanEquation(FILE *test_file, Equation *eq);

/// @brief Выполняет  программу в режиме считывания уравнений из файла
void FileSolve(char *argv[]);

#endif