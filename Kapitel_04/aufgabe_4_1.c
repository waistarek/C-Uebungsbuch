#include <stdio.h>

int main(void)
{
		
	printf("Aufgabe a\n");
	float x = 123456.123456789;
	printf("Wert x = %15.5E\n", x);
	printf("Aufgabe b\n\n");
	long result = 123456789123 +432 ;
	//Meine Lösung
	printf("Ergebnis:  %10.ld\n", result); 
	// Lösung im Buch
	printf("%-12s%10ld\n", "Ergebnis:", result);
	printf("Aufgabe c\n\n");
	int tag = 1;
	int monat = 7;
	int jahr = 1995;
	printf("%02d.%02d.%04d", tag, monat, jahr);




	return 0;

}
