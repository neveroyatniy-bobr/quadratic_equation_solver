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
    Rootcount root_count;
    double x1, x2;
};

struct Equation
{
    double a, b, c;
};

void Solve(Equation eq, Solution *sol);

void LinearSolve(Equation eq, Solution *sol);

void QuadraticSolve(Equation eq, Solution *sol);

#endif // SOLVER_H_
