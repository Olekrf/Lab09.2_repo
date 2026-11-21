#include "calc.h"
#include "macros.h"

double calcBranch1(double x, double y, double z) {
    return MIN(SQR(x - z), x - y);
}

double calcBranch2(double x, double y, double z) {
    return MAX(x * y, y * z) + MIN(z * x, y * z);
}

double calcW(double x, double y) {
#if Z > 3
    return calcBranch1(x, y, Z);
#else
    return calcBranch2(x, y, Z);
#endif
}
