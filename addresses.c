#include <stdio.h>

int main(void) {
    int k1 = 2.5;
    int k2 = -3.4;
    
    printf("Address of k1: %p\n", (void*)&k1);
    printf("Address of k2: %p\n", (void*)&k2);
    
    return 0;
}
