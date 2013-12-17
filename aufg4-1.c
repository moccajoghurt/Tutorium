#include <stdio.h>
#include <math.h>


float get_sin_val(float x) {
    
    x = 0.5 * (exp(x) - exp(-x));
    return x;
}

void get_sin_ref(float* x) {
    
    *x = 0.5 * (exp(*x) - exp(-*x));
}

int main(void) {
    
    int anfang, ende, schritt;
    
    printf("Tabellen-Anfang angeben: ");
    scanf("%d", &anfang);
    getchar();
    
    printf("Tabellen-Ende angeben: ");
    scanf("%d", &ende);
    getchar();
    
    printf("Schritte angeben: ");
    scanf("%d", &schritt);
    getchar();
    
    int i;
    for(i = anfang; i < ende; i += schritt) {
        printf("x = %d\t sin(x) = %f\n", i, get_sin_val(i));
    }
}
