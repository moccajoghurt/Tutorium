#include <stdio.h>
#include <math.h>

int main() {
    
    double  v, a, x;
    printf("Geschwindigkeit: ");
    scanf("%lf", &v);
    printf("Beschleunigung: ");
    scanf("%lf", &a);
    printf("Strecke: ");
    scanf("%lf", &x);
    
    printf("vend: %lfkm/h\n", 3.6 * sqrt((v/3.6)*(v/3.6) + 2*a*x));
    
}
