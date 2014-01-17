#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int* addr_var = malloc(sizeof(int) * 256);
	
	printf("addr_var: %x\n&addr_var: %x\n", (unsigned int)addr_var, (unsigned int)&addr_var);
	
	int i;
	for (i = 0; i < 256; i++) {
		addr_var[i] = i;
	}
	for (i = 0; i < 256; i++) {
		printf("%d ", addr_var[i]);
		if ((i + 1) % 8 == 0) printf("\n");
	}
	
	// d) nein, da der allokierte Speicherplatz nicht mehr angesprochen werden kann
	// e) malloc wird einen Fehler zurückgeben
}
