#include<stdio.h>

int main(void)
{

/* Meine Lösung
 *
 * float a = 1.8;
       float b = 1.2;
	
	printf("Das ist die Summe von a und b: %f\n",a+b);       
	printf("Das ist die Differenz von a und b: %f\n",a-b);       
	printf("Das ist das Produkt von a und b: %f\n",a*b);       
	printf("Das ist der Quotienten von a und b: %f\n",a/b);      */ 

	// Die Lösung im Buch
	double zahl1 = 12.3, zahl2 = 78.9;
	double summe, differenz, produkt, quotient;
	printf("Wert der zwei Variablen: %f und %f\n",zahl1, zahl2);

	summe = zahl1 + zahl2;
	differenz = zahl1 - zahl2;
	produkt = zahl1 * zahl2;
	quotient = zahl1/zahl2;

	printf("Summe:   %f\n"
	       "Differenz: %f\n"
	       "Produkt: %f\n"
	       "Quotient: %f\n",
	       		summe,differenz, produkt, quotient);
	return 0;
}
