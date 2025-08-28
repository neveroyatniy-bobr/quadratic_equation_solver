#ifndef SOLVER_H_
#define SOLVER_H_

enum Rootcount
{
    root0 = 0,
    root1 = 1,
    root2 = 2,
    inf = 3
};

struct Solution
{
    Rootcount rcnt;
    double x1, x2;
};

struct Equation
{
    double a, b, c;
};

void solve(Equation eq, Solution *sol);

void linearsolve(Equation eq, Solution *sol);

void quadraticsolve(Equation eq, Solution *sol);

#endif // SOLVER_H_
