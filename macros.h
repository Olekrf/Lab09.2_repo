#pragma once
#ifndef MACROS_H
#define MACROS_H

#include <stdio.h>

#ifndef Z
#define Z 2
#endif

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#define PRINTI(w) puts("control output"); \
    printf(#w " = %d\n", w)

#define PRINTR(w) puts("rezult :"); \
    printf(#w " = %f\n", (float)(w))

#endif
