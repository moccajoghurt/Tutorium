#include <stdio.h>

int main() {
	int zahlen[30];
	int anzahl;
	printf("Anzahl der Zahlen angeben (max 30): ");
	scanf("%d", &anzahl);
	
	int i;
	for (i = 0; i < anzahl; i++) {
		scanf("%d", zahlen + i);
	}
	
	int min = zahlen[anzahl - 1];
	int max = zahlen[anzahl - 1];
	int count = 1;
	for (i = anzahl - 1; i >= 0; i--) {
		
		if (zahlen[i] < min) min = zahlen[i];
		if (zahlen[i] > max) max = zahlen[i];
		
		printf("%d ", zahlen[i]);
		if (count % 5 == 0) puts("");
		count ++;
	}
	
	printf("\nmin: %d\nmax: %d\n", min, max);
}
