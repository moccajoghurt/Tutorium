/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    unsigned int summe, a, b;
    
    printf("A eingeben:");
    scanf("%d", &a);
    printf("B eingeben:");
    scanf("%d", &b);
    

    /* Berechnung */
    summe=a+b;
    
    /* Ausgabe des Ergebnisses */
    printf("%d\n",summe);
    fflush(stdin);
    getchar();
}
