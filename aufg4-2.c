/*

Alle Funktionen sind dafuer geeignet, swapInteger3 ist nur etwas aufwaendiger.

*/
#include <stdio.h>

void swapInteger1(int a, int b) {
    int buf = a;
    a = b;
    b = buf;
}

void swapInteger2(int* a, int* b) {
    int buf = *a;
    *a = *b;
    *b = buf;
}

void swapInteger3(int** a, int** b) {
    int buf = **a;
    **a = **b;
    **b = buf;
}

int main(void) {
    
    //Swap Integer 1
    puts("swap integer 1");
    int x = 13, y = 37;
    printf("x = %d\t y = %d\n", x, y);
    swapInteger1(x, y);
    printf("x = %d\t y = %d\n\n", x, y);
    
    // Swap Integer 2
    puts("swap integer 2");
    int a = 13, b = 37;
    printf("a = %d\t b = %d\n", a, b);
    swapInteger2(&a, &b);
    printf("a = %d\t b = %d\n\n", a, b);
    
    
    //Swap Integer 3
    puts("swap integer 3");
    int **c, **d;
    int *buf, *buf1;
    buf = &a;
    buf1 = &b;
    
    c = &buf;
    d = &buf1;
    
    printf("c = %d\t d = %d\n", **c, **d);
    swapInteger3(c, d);
    printf("c = %d\t d = %d\n", **c, **d);
}
