#include <stdio.h>

int main(void)
{//a) // Hier stimmt einiges nicht!

	/*double a;
	b = a + 10;// b is not declared and a is not intialised.//Die Variable a muss initialisiert werden, da mit ihrem Wert gerechnet wird.Die Variable b ist nicht definiert.
		   // Das Formatelement in der printf-Anweisung muss %f sein(statt %d) und die Escape-Sequenz lautet \n ( statt /n)


	printf("Ergebnis: %d\n", b);*/
	//Lösung für a 
	double a = 1.5, b;
	b = a + 10;
	printf("Ergebnis: %f\n");

//b)
/*	char z1 = "?", z2 = 0x100, z3 = 0101;//Die Initialisierungen von z1 und z2 sind nicht korrekt: Eine Variable vom Typ char kann keinen String oder Werte größer als 0x7f = 127 speichern
	printf("Die drei Zeichen:  %c  %c\n", z1 z2 z3);//the no commas between the variables and there are three variables and just two format.In der printf-Anweisung fehlt ein Formatelement und die Argumente sind mit Kommas zu trennen. */
	char z1 = '?', z2 = 0x40, z3 = 0101;
	printf("Die drei Zeichen: %c  %c  %c\n", z1, z2, z3);//Ausgabe: Die drei Zeichen: ? @ A


	return 0;

}
