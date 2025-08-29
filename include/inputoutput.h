#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_

#include "solver.h"

/**
\file inputoutput.h
\brief Содержит определения для ввода и вывода
*/

/// @brief Очищает буффер ввода
void ClearBuffer();

/// @brief Предлагает пользвоателю ввести уравнения
/// @param eq Указатель на уравнение, в которое записывать значения
void Input(Equation *eq);

/// @brief Выводит решение уравнения
/// @param sol Уравнение, которое надо вывести
void Output(Solution sol);

#endif // INPUTOUTPUT_H_
