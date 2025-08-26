#include "inputoutput.h"

#include <stdio.h>

#include "solver.h"

void clearbuffer() {
    int ch = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

void input(Equation *eq) {

    printf("������� ���������� ����������� ��������� ����� ������: ");
    while (scanf("%lf %lf %lf", &(eq->a), &(eq->b), &(eq->c)) != 3) {
        clearbuffer();
        printf("���������������, ����� ����� �� ����� ������ ������ 3 �����, ���� ��� ������� �� ��������� �����, 3 �����, ������ �����, �������������� ����������� ����������� ���������, ������� �� ������ ������. ���������� �����.\n");
        printf("������� ���������� ����������� ��������� ����� ������: ");
    }
}

void output(Solution sol) {
    switch(sol.rcnt) {
        case root0:
            printf("� ����� ��������� ��� ������\n");
            break;
        case inf:
            printf("����� ����� ��������� ��� ��� ��������� �������������� �����\n");
            break;
        case root1:
            printf("������ ����� ���������: %lf\n", sol.x1);
            break;
        case root2:
            printf("����� ����� ���������: %lf, %lf\n", sol.x1, sol.x2);
            break;
        default:
            printf("������....\n");
    }
}
