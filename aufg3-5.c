#include <stdio.h>

int main() {
    
    float eingabe, erg;
    char op;
    
    printf("Taschenrechner gestartet.\nErste Zahl angeben: ");
    scanf("%f", &eingabe);
    getchar();
    erg = eingabe;
    
    while((op = getchar()) != '=') {
        scanf("%f", &eingabe);
        getchar();
        
        switch(op) {
            case '+': erg += eingabe;
                break;
            case '-': erg -= eingabe;
                break;
            case '*': erg *= eingabe;
                break;
            case '/': erg /= eingabe;
                break;
        }
        printf("Zwischenergebnis: %.2f\n", erg);
    }
    
    printf("Endergebnis: %.2f\n", erg);
}
