#include <stdio.h>


int get_exp(int z, int p) {
    
    int sum = 1;
    
    int i;
    for (i = 0; i < p; i++) {
        sum *= z;
    }
    
    return sum;
}


int get_exp_rec(int z, int p) {
    
    if (p == 0)
        return 1;
    
    z = z * get_exp_rec(z, p - 1);
    return z;
}

int main(void) {
    
    printf("Schleife 1: %d\n", get_exp(2, 2));
    
    printf("Schleife 2: %d\n", get_exp_rec(2, 5));
}
