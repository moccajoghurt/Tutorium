#include <stdio.h>

int main(void) {
    
    float z;
    int p;
    printf("Zahl eingeben: ");
    scanf("%f", &z);
    
    printf("Potenz der Zahl eingeben: ");
    scanf("%d", &p);
    
    float sum = 1;
    
    int i;
    for (i = p < 0 ? -p : p; i > 0; i--) {
        sum *= z;
    }
    sum = p < 0 ? 1/sum : sum;
    printf("Summe: %f\n", sum);
}
