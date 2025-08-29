#ifndef UTILS_H_
#define UTILS_H_

/**
\file utils.h
\brief Содержит вспомогательные определения
*/

/// @brief Константа, означающая точность сравнения double
static const double EPSILONE = 1e-12;

/// @brief Закрывает программу при невыполнении условия и выводит file  line
/// @param condition Условия работы программы
/// @param file файл, в котором находится asset
/// @param line  линия, в которой находится assert
void Assert(bool condition, const char* file, int line);

/// @brief Проверяет, является ли x NAN-ом
/// @param x число, которое проверяют
/// @return Возвращает true, если число NAN, иначе false
bool MyIsNan(double x);

/// @brief Проверяет, является ли x бесконечностью
/// @param x число, которое проверяют
/// @return Возвращает true, если число бесконечность, иначе false
bool MyIsInf(double x);

/// @brief Сравнивает 2 double
/// @param a Первое double
/// @param b Второе double
/// @return Возвращает true, если a = b с определенной точностью, иначе false
bool IsEqual(double a, double b);

#define MyAssert(condition) Assert(condition, __FILE__, __LINE__);

#endif // UTILS_H_
