#ifndef SOLVER_H_
#define SOLVER_H_

enum Rootcount {
    root0,
    root1,
    root2,
    inf
};

struct Solution {
    Rootcount rcnt;
    double x1, x2;
};

struct Equation {
    double a, b, c;
};

static double Epsilone = 1e-12;

void solve(Equation eq, Solution *sol);
bool isequal(double a, double b);

#endif // SOLVER_H_
