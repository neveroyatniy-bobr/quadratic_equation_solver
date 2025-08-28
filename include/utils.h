#ifndef UTILS_H_
#define UTILS_H_

static const double Epsilone = 1e-12;

bool myisnan(double x);
bool myisinf(double x);
bool isequal(double a, double b);

// FIXME вынести внутринности дефайна в функцю
#define myassert(condition)                                                   \
    if (!condition)                                                           \
    {                                                                         \
        printf(RED "Assertation error in " __FILE__ " %d\n" reset, __LINE__); \
        abort();                                                              \
    }

#endif // UTILS_H_
