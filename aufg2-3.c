#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c, D;
    puts("\"a b c\" als Ganzzahlen angeben: ");
    scanf("%d %d %d", &a, &b, &c);
    b = b/a;
    c = c/a;
    
    D = b*b / 4 - c;
    
    if (D > 0) {
        printf("%d und %d sind die beiden reellen Loesungen\n", -b/2 + (int)sqrt(D), -b/2 - (int)sqrt(D));
        
    } else if (D == 0) {
        printf("%d ist die einzige reelle Loesung\n", -b/2);
        
    } else if (D < 0) {
        D = -D;
        printf("%d + %di und %d - %di sind die beiden komplexen Loesungen\n", -b/2, (int)sqrt(D), -b/2, (int)sqrt(D));
        
    }
}
