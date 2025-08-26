#include "inputoutput.h"

#include <stdio.h>

#include "solver.h"

void clearbuffer() {
    int ch = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

void input(Equation *eq) {

    printf("Введите коэфиценты квадратного уравнения через пробел: ");
    while (scanf("%lf %lf %lf", &(eq->a), &(eq->b), &(eq->c)) != 3) {
        clearbuffer();
        printf("Сосредоточьтесь, нужно всего то через пробел ввести 3 числа, если они дробные то используй точку, 3 числа, именно числа, соответсвующих коэфицентам квадратного уравнения, которое вы хотите решить. ПОпробуйте снова.\n");
        printf("Введите коэфиценты квадратного уравнения через пробел: ");
    }
}

void output(Solution sol) {
    switch(sol.rcnt) {
        case root0:
            printf("У этого уравнения нет корней\n");
            break;
        case inf:
            printf("Корни этого уравнения это все множество действительных чисел\n");
            break;
        case root1:
            printf("Корень этого уравнения: %lf\n", sol.x1);
            break;
        case root2:
            printf("Корни этого уравнения: %lf, %lf\n", sol.x1, sol.x2);
            break;
        default:
            printf("Ошибка....\n");
    }
}
