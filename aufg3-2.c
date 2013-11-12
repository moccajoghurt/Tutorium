#include <stdio.h>

int main(void) {
    
    float z;
    int p;
    printf("Zahl eingeben: ");
    scanf("%f", &z);
    
    printf("Potenz der Zahl eingeben: ");
    scanf("%d", &p);
    
    float sum = 1;
    int buf = p < 0 ? -p : p;
    
    do {
        sum *= z;
        buf--;
    } while (buf > 0);
    sum = p < 0 ? 1/sum : sum;
    printf("Summe: %f\n", sum);
    
    
    sum = 1;
    buf = p < 0 ? -p : p;
    
    while (buf > 0) {
        
        sum *= z;
        buf--;
    }
    sum = p < 0 ? 1/sum : sum;
    printf("Summe: %f\n", sum);
    
    
    sum = 1;
    for (buf = p < 0 ? -p : p; buf > 0; buf--) {
        sum *= z;
    }
    sum = p < 0 ? 1/sum : sum;
    printf("Summe: %f\n", sum);
}
