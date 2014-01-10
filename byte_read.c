#include <stdio.h>
#include <stdlib.h>

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
	
	long lSize;
	char* buffer;
	
	fseek (fp , 0 , SEEK_END);
	lSize = ftell (fp);
	rewind (fp);
	
	buffer = (char*) malloc (sizeof(char)*lSize);
	fread (buffer, 1, lSize, fp);
    
	int count = 1;
	int i;
	for (i = 0; i < lSize; i++) {
		printf("%02x ", (unsigned char)buffer[i]);
		if (count % 20 == 0) puts("");
        count++;
	}
}
