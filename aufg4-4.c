#include <stdio.h>
#include <math.h>

int get_func_val(int x, int y, float* erg) {
    
    if ((pow(x, 2) - pow(y, 2)) <= 0)
        return 0;
    
    *erg = sqrt(pow((float)x, 2) - pow((float)y, 2));
    
    return 1;
}

int main(void) {
    
    int x = 3, y = 2;
    float erg;
    get_func_val(x, y, &erg);
    
    printf("x = %d, y = %d \t func(x, y) = %f\n", x, y, erg);
    
}
