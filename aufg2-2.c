#include <stdio.h>

int main() {
    
    int menge;
    float p1, p2, p3;
    puts("Menge angeben in kg:");
    scanf("%d", &menge);
    
    p1 = menge >= 5000 ? (menge/50)*(25.5) * 0.97 : (menge/50)*(25.5);
    p2 = menge >= 15000 ? (menge/50)*(26.8) * 0.97 * 0.95 : (menge/50)*(26.8) * 0.97;
    p3 = menge >= 3000 ? (menge/50)*(26.45) * 0.98 * 0.965 : (menge/50)*(26.45) * 0.98;
    
    printf("Angebot 1: %.2f\n", p1);
    printf("Angebot 2: %.2f\n", p2);
    printf("Angebot 3: %.2f\n", p3);
    
    float smallest = p1;
    if (smallest > p2)
        smallest = p2;
    
    if (smallest > p3)
        smallest = p3;
        
    printf("Günstigstes Angebot: %.2f\n", smallest);
    
}
