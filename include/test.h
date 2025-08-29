#ifndef TEST_H_
#define TEST_H_

#include <stdio.h>

#include "solver.h"

/// @brief Хранит тест
struct Test
{
    Equation eq; ///< Уравнение на проверку
    Solution right_sol; ///< Правильное решение этого уравнения
};

/// @brief Сканирует тест из файла
/// @param test_file Файл, из которого сканировать
/// @param test Указатель на тест, в который записать значения
/// @return true, если тест отсканировался, иначе false
bool ScanTest(FILE *test_file, Test *test);

/// @brief Выполнияет один тест
/// @param test Тест на проверку
/// @return Возвращет true, если тест пройден, иначе false
bool OneTest(Test test);

/// @brief Выполняет все тесты из файла "./data/tests.txt"
void AllTest();

#endif // TEST_H_
