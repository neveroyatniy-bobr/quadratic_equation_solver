#include "inputoutput.h"

#include <stdio.h>

#include "solver.h"

void ClearBuffer()
{
    int ch = 0;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}

void Input(Equation *eq)
{
    printf("Введите коэфиценты уравнения через пробел: ");
    while (scanf("%lf %lf %lf", &(eq->a), &(eq->b), &(eq->c)) != 3)
    {
        ClearBuffer();
        printf("Попробуйте еще раз, если не хотите решать уравнение введите 0 0 0\n");
        printf("Введите коэфиценты уравнения через пробел: ");
    }
}

void Output(Solution sol)
{
    switch (sol.root_count)
    {
    case root0:
        printf("У этого уравнения нет корней\n");
        break;
    case inf:
        printf("Решением этого уравнения является всё множество действительных чисел\n");
        break;
    case root1:
        printf("Вот корень этого уравнения: %lf\n", sol.x1);
        break;
    case root2:
        printf("Вот корни этого уравнения: %lf, %lf\n", sol.x1, sol.x2);
        break;
    default:
        printf("Ого....\n");
    }
}
