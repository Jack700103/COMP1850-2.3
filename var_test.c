#include <stdio.h>

int main(void) {
    unsigned char hour = 15;
    
    unsigned long long population = 1400000000;
    
    long long minutes_diff = -123456789LL;
    
    float mean_temp = 9.8f;
    
    double gps_lat = 53.800756;
    
    long double pi = 3.14159265358979323846L;
    
    printf("Clock hour: %u\n", hour);
    printf("Population: %llu\n", population);
    printf("Time difference: %lld minutes\n", minutes_diff);
    printf("Mean temperature: %.1f°C\n", mean_temp);
    printf("GPS latitude: %.6f°\n", gps_lat);
    printf("Pi: %.12Lf\n", pi);

    return 0;
}
