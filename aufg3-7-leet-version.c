#include <stdio.h>

int main() {

	while (1) {
		char c;
		unsigned int sec;
		printf("Sekunden eingeben: ");
		scanf("%u", &sec);
		
		printf("%u Woche%c, ", (sec/60/60/24/7)%4, c = (sec/60/60/24/7)%4 > 1 ? 'n' : '\0');
		printf("%u Tag%c, ", (sec/60/60/24)%7, c = (sec/60/60/24)%7 > 1 ? 'e' : '\0');
		printf("%02u:%02u:%02u Stunden\n", (sec/60/60)%24, (sec/60)%60, sec%60);
	}
}
