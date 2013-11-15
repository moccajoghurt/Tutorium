#include <stdio.h>
#include <math.h>

int main() {
    
    float x, E;
    
    printf("x angeben (x > 0 und x <= 2): ");
    scanf("%f", &x);
    
    printf("E angeben: ");
    scanf("%f", &E);
    
    float sum = x - 1;
    int i;
    for (i = 2; i < 999999; i++) {
        
        float buf = 1;
        int y;
        for (y = 0; y < i; y++) {
            buf *= (x-1);
        }
        buf = buf / i;
        
        if (i & 1) {

            sum += buf;
            
        } else {
            sum -= buf;
        }
        
        if (sum < E)
            break;
    }
    printf("log x ohne math.h: %f\n", sum);
    printf("log x mit math.h: %f\n", log(x));
}
