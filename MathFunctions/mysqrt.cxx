#include "MathFunctions.h"
#include <stdio.h>

// a hack square root calculation using simple operations
double mysqrt(double x)
{
    if (x <= 0) {
        return 0;
    }

    double result;
    double delta;
    result = x;

    // if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
    result = exp(log(x) * 0.5);
    printf("The platform have log and exp support.\n");
#else
    // do ten iterations
    int i;
    for (i = 0; i < 10; ++i) {
        if (result <= 0) {
            result = 0.1;
        }
        delta = x - (result * result);
        result = result + 0.5 * delta / result;
        fprintf(stdout, "Computing sqrt of %g to be %g\n", x, result);
    }
    printf("The system don't have log and exp support.\n");
#endif
    return result;
}

