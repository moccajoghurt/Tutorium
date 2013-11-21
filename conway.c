#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //die Zeichenkette repraesentiert immer eine Conway-Folge
    char* zeile = calloc(1, 100);
    zeile[0] = '1';
    // gib die erste Zeile aus
    puts(zeile);
    
    int i;
    for (i = 0; i < 12; i++) {
        
        // Das ist die neue Zeile, die sich aus der vorigen Zeile ergeben wird. Steht zu Beginn komplett auf 0
        char* new_zeile = calloc(1, 100);
        
        char last = zeile[0]; /* merke dir das erste Zeichen der Kette */
        int char_count = 0; /* hiermit zählen wir wie haeufig eine Zahl in der Kette vorkommt*/
        int pos = 0; /* hiermit merken wir uns die Position des Wertes, den wir momentan anschauen*/
        
        // wir durchlaufen die Zeile solange, bis wir am Ende angekommen sind
        while (pos < strlen(zeile)) {
            if (last == zeile[pos]) {
                /* Falls der letzte Wert derselbe wie der vorige ist, dann zaehle die Anzahl des Werts nach oben */
                char_count++;
                
                if (pos == strlen(zeile) - 1) {
                    /* falls wir im letzten Schleifendruchlauf sind, dann schreibe die gespeicherten Werte in die neue Zeile*/
                    new_zeile[strlen(new_zeile)] = char_count + '0'; /* durch + '0' wird aus der z.B. der Zahl 1 der character '1' */
                    new_zeile[strlen(new_zeile)] = zeile[pos];
                }
                
            } else {
                /* hier landen wir, falls sich der vorige Wert vom jetzigen unterscheidet*/
                new_zeile[strlen(new_zeile)] = char_count + '0'; /* schreibe die Anzahl vom vorigen Wert in die neue Zeile*/
                new_zeile[strlen(new_zeile)] = last; /* schreibe den vorigen Wert in die Zeile*/
                
                /* der jetzige Wert wird gespeichert, damit wir ihn beim naechsten Durchlauf noch kennen*/
                last = zeile[pos];
                
                /* die Anzahl des neuen Werts betraegt 1*/
                char_count = 1;
                
                if (pos == strlen(zeile) - 1) {
                    /* falls wir im letzten Schleifendruchlauf sind, dann schreibe die gespeicherten Werte in die neue Zeile*/
                    new_zeile[strlen(new_zeile)] = '1';
                    new_zeile[strlen(new_zeile)] = zeile[pos];
                }
            }
            
            pos++; /* Position in der Kette hochzaehlen*/
        }
        strcpy(zeile, new_zeile); /* hier kopieren wir die neue Zeile in die Zeile*/
        puts(zeile); /* hier geben wir die Zeile aus*/
        free(new_zeile); /* gib den benutzten Arbeitsspeicher von new_zeile wieder frei*/
    }
}
