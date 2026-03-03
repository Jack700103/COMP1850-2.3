#include <stdio.h>

int main(void) {
    double d = 1.0/3.0;
    float f = 2.3f;
    int k = -7;

    printf("d/k = %.16f\n", d/(double)k);
    printf("f-d (double) = %.16f\n", (double)f - d);
    printf("f-d (float) = %.16f\n", (float)(f - d));
    printf("k+d = %.16f\n", (double)k + d);

    return 0;
}
