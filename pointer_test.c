#include <stdio.h>

int main(void) {
    float f = 2.3f;
    int k = -2;
    
    float *pf = &f;
    int *pk = &k;
    
    float sum = (float)f + (float)k;
    printf("Direct sum: %.6f\n", sum);
    
    sum = *pf + (float)*pk;
    printf("Pointer sum: %.6f\n", sum);

    return 0;
}
