#ifndef UTILS_H_
#define UTILS_H_

static const double EPSILONE = 1e-12;

void Assert(bool condition, const char* file, int line);

bool MyIsNan(double x);

bool MyIsInf(double x);

bool IsEqual(double a, double b);

// FIXME вынести внутринности дефайна в функцю
#define MyAssert(condition) Assert(condition, __FILE__, __LINE__);

#endif // UTILS_H_
