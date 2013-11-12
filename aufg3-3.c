#include <stdio.h>

int main() {
    
    float p, s, ez, ges = 0;
    int n;
    
    printf("Laufzeit n in Jahren angeben: ");
    scanf("%d", &n);
    
    printf("Zinssatz p in Prozent angeben: ");
    scanf("%f", &p);
    p = p/100;
    
    while (n > 0) {
        printf("Sparrate s angeben: ");
        scanf("%f", &s);
        ez = (ges + s) * p;
        ges += s;
        ges += ez;
        
        printf("Erhaltende Zinsen: %.2f\n", ez);
        printf("Gesamtguthaben: %.2f\n", ges);
        printf("##\n");
        n--;
    }
}
