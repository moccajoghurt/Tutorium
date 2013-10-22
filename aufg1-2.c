#include <stdio.h>
#include "mathkonst.h"

int main() {
    
    double r, h;
    printf("r eingeben:");
    scanf("%lf", &r);
    printf("h eingeben:");
    scanf("%lf", &h);
    
    double vol = M_PI*r*r*h;
    
    printf("Volumen: %lf\n", vol);
    
    
}
