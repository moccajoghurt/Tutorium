#include <stdio.h>

int main(int argc, char** argv) {
    
    if (argc < 2) {
        printf("usage: ./file file_to_read\n");
        return 1;
    }
    
    FILE* fp;
    fp = fopen(argv[1], "r");
    
    if (fp == NULL) {
        printf("could not read file \n");
        return 1;
    }
    int count = 1;
    unsigned char c;
    while (fread(&c, 1, 1, fp)) {
        printf("%02x ", c);
        
        if (count % 20 == 0) puts("");
        count++;
    }
    
}
