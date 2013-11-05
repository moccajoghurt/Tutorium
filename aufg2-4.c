#include <stdio.h>

int main(void) {
    
    
    int x, steuer;
    float y;
    
    printf("Einkommen eingeben: ");
    scanf("%d", &x);
    
    if (x < 7665) {
        steuer = 0;
        
    } else if (x >= 7665 && x <= 12739) {
        y = (x - 7664) / 10000.;
        steuer = (883.74 * y + 1500) * y;
        
    } else if (x >= 12740 && x <= 52151) {
        y = (x - 12739) / 10000.;
        steuer = (228.74 * y + 2397) * y + 989;
        
    } else if (x >= 52152 && x <= 250000) {
        steuer = 0.42 * x - 7914;
        
    } else if (x > 250000) {
        steuer = 0.45 * x - 15414;
    }
    
    printf("Steuer: %deuro\n", steuer);
    
}
