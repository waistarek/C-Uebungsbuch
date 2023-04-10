//3.4) was gibt das folgende Programm am Bildschirm aus?
//
//Hinweis: Die Standardfunktion floor() lierfert die größte ganze Zahl, die kleiner oder gleich ihrem Argument ist. Mit anderen Worten, floor() schneide bei einer positiven Zahl den gebrochenen Anteil einer Gleitpunktzahl ab. Die Header-Datei math.h enthält den Prototyp der Funktion.

#include <stdio.h>
#include <math.h>

int main(void)
{
	double betrag1 = 99.4, betrag2 = 99.5;
	double preis1 = 1.9849, preis2 = 2.9851;

	betrag1 = floor( betrag1 + 0.5);
	betrag2 = floor( betrag2 + 0.5);

	printf("betrag1 = %f betrag2 = %f\n",
		       	betrag1, betrag2);
	preis1 = floor( preis1 * 100 + 0.5) / 100;

	preis2 = floor( preis2 * 100 + 0.5) / 100;
	printf("preis1 = %f preis2 = %f\n",
		       	preis1, preis2);

	return 0;

}
