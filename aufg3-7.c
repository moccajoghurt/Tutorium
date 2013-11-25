#include <stdio.h>

int main() {

	while (1) {
		unsigned int sec;
		printf("Sekunden eingeben: ");
		scanf("%u", &sec);
		
		unsigned int wochen = (sec/60/60/24/7)%4;
		if (wochen > 1 || wochen == 0)
			printf("%u Wochen, ", wochen);
		else
			printf("%u Woche, ", wochen);
		
		unsigned int tage = (sec/60/60/24)%7;
		if (tage > 1 || tage == 0)
			printf("%u Tage, ", tage);
		else
			printf("%u Tag, ", tage);
		
		printf("%02u:", (sec/60/60)%24);
		printf("%02u:", (sec/60)%60);
		printf("%02u Stunden\n", sec%60);
	}
}
