#ifndef UTILS_H_
#define UTILS_H_

static const double Epsilone = 1e-12;

void assert(bool condition, const char *message);
bool isNAN(double x);
bool isINF(double x);
bool isequal(double a, double b);

#endif // UTILS_H_
