#include <stdio.h>

int main() {
    
    int hoehe;
    printf("Hoehe angeben: \n");
    scanf("%d", &hoehe);
    
    if (hoehe < 200) {
        puts("maritimes Klima");
        
    } else if(hoehe >= 200 && hoehe < 1800) {
        puts("Regenwald");
    }else if(hoehe >= 1800 && hoehe < 2300) {
        puts("immergruener Wald");
    }else if(hoehe >= 2300 && hoehe < 3500) {
        puts("alpines Klima");
    }else if(hoehe >= 3500 && hoehe < 4200) {
        puts("ewiges Eis");
    }
    
}
