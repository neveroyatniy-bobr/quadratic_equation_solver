#ifndef SOLVER_H_
#define SOLVER_H_

/// @brief Обозначает количество корней уравнения
enum Rootcount
{
    root0 = 0,
    root1 = 1,
    root2 = 2,
    inf = 3
};

/// @brief Хранит решение уравнения n-ой степени не больше 2
struct Solution
{
    Rootcount root_count; ///< Количество корней уравнения
    double x1;            ///< Первый корень
    double x2;            ///< Второй корень(В случае если у уравнения 1 корень он равен 0)
};

/// @brief Хранит коэфиценты уравнения
struct Equation
{
    double a; ///< Коэфицент перед 2 степенью
    double b; ///< Коэфицент перед 1 степенью
    double c; ///< Свободный коэфицент
};

/// @brief Решает уравнение n-ой степени не больше 2
/// @param eq Уравнение, которое надо решить
/// @param sol Указатель на решение, в которое записать результат
void Solve(Equation eq, Solution *sol);

/// @brief Решает уравнение 1-ой степени
/// @param eq Уравнение, которое надо решить
/// @param sol Указатель на решение, в которое записать результат
void LinearSolve(Equation eq, Solution *sol);

/// @brief Решает уравнение 2-ой степени
/// @param eq Уравнение, которое надо решить
/// @param sol Указатель на решение, в которое записать результат
void QuadraticSolve(Equation eq, Solution *sol);

#endif // SOLVER_H_
