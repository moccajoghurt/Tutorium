#include <stdio.h>

int main(void) {
    
    int z, p;
    printf("Zahl eingeben: ");
    scanf("%d", &z);
    
    printf("Potenz der Zahl eingeben: ");
    scanf("%d", &p);
    
    int sum = 1;
    int buf = p;
    
    do {
        sum *= z;
        buf--;
    } while (buf > 0);
    printf("Summe: %d\n", sum);
    
    
    sum = 1;
    buf = p;
    
    while (buf > 0) {
        
        sum *= z;
        buf--;
    }
    printf("Summe: %d\n", sum);
    
    
    sum = 1;
    for (buf = p; buf > 0; buf--) {
        sum *= z;
    }
    printf("Summe: %d\n", sum);
}
