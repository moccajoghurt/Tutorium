#include <math.h>
#include <stdio.h>

int main() {
    
    double g = 9.81;
    
    printf("Turmhöhe h: ");
    double h;
    scanf("%lf", &h);
    
    printf("Fallzeit: %.3lfs\n", sqrt(2*h/g));
    printf("vmax: %.3lfm/s bzw %.3lfkm/h\n", sqrt(2*g*h), sqrt(2*g*h)*3.6);
    
    
}
