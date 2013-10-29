/* Datei aufg1-7.c */
/* Umrechnung von Winkelmaß in Bogenmaß */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	double winkel, bogen;
	double faktor=2*3.141592654/360;
	printf("Geben Sie den Winkel im Winkelmass ein: ");
	scanf("%lf", &winkel);
	bogen = winkel*faktor;
	printf("Ein Winkel von %lf Grad entspricht %lf rad\n\n",winkel, bogen);
}
