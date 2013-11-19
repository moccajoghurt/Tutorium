#include <stdio.h>

int main() {
    
    int i;
    for (i = 0; i < 100; i++) {
        
        int buf = i;
        int sum = buf % 10;
        while ((buf = buf / 10) != 0) {
            sum += buf % 10;
        }
        
        if (sum == 7) {
            printf("** ");
            
        } else if (i % 7 == 0) {
            
            printf("** ");
            
        } else {
            printf("%02d ", i);
        }
        
        if ((i+1) % 10 == 0) {
            printf("\n");
        }
    }
}
