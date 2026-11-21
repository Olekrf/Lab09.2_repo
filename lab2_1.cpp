#include "macros.h"
#include "calc.h"

int main() {
    puts("Lab 9.2 (Part 1, Variant 17). Using macros and preprocessing directives");

    int x, y;
    double w;
    char ch;

    do {
#if Z > 3
        puts("Compiled branch: z > 3");
#else
        puts("Compiled branch: z <= 3");
#endif
        puts("Input integer numbers x, y:");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        PRINTI(Z);

        w = calcW(x, y);
        PRINTR(w);

        puts("Repeat? y / n ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
