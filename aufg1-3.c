#include <stdio.h>
#include <math.h>

int main() {
    
    double x;
    printf("Zahl x angeben:");
    scanf("%lf", &x);
    
    printf("%lf\t %lf\t %lf\t %lf\n", sqrt(1+x*x), (1+x)/(1-x), sin(x), exp(-x));
    
}
