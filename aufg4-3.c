#include <stdio.h>

int get_num_length(int x) {
    
    int length = 1;
    
    while (x / 10 != 0) {
        x /= 10;
        length++;
    }
    
    return length;
    
}

int main(void) {
    
    while (1) {
        
        int a;
        printf("Zahl angeben: ");
        scanf("%d", &a);
        getchar();
        printf("Stellenanzahl: %d\n", get_num_length(a));
        
        
        printf("continue? y/n: ");
        char c;
        scanf("%c", &c);
        getchar();
        if (c == 'n')
            break;
    }
    
}
