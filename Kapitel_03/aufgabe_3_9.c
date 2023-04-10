//3.9)Was gibt das folgende Programm am Bildschirm aus?

//Hisweis: Die selbst definierte Funktion euro2dollar() erhält als Argumente einen Euro-Betrag und den Wechselkurs. Mit der return-Anweisung gibt die Funktion den in US-Dollar umgerechneten Betrag zurück.
//Im Formatelement %.2f ist .2 die Genauigkeit. Sie bewirkt, dass genau zwei Stellen nach dem Dezimalpunkt ausgegeben werden.
#include <stdio.h>

double euro2dollar(double euro, double kurs);

int main()
{
	double kurs = 1.45,euro = 200.0, dollar;

	dollar = euro2dollar(euro, kurs);
	printf("Beim Kurs von %f Dollar fuer einen Euro sind\n"
			"%.2f Euro = %.2f Dollar\n", kurs, euro, dollar);

	kurs = 1.333333;
	euro = 300.0;

	dollar = euro2dollar(euro, kurs);
	printf("Beim Kurs von %f Dollar fuer einen Euro sind\n"
			"%.2f Euro = %.2f Dollar\n",kurs, euro, dollar);

	return 0;
}

//- - -- - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - 
//Die Funktion euro2dollar() gibt zu einem Euro-Betrag 
//den entsprchenden Betrag in US-Dollar zurück.
//Der Kurs ist der Preis in DOllar für einen Euro und 
//wird als zweites Argument übertragen.
//

double euro2dollar(double euro, double kurs)
{
	double dollar = euro * kurs;
	return dollar;
}
//Meine Lösung: Ausgabe:
//Beim Kurs von 1.45 Dollar fuer einen Euro sind 200.00 Euro = 290.00 Dollar
//Beim Kurs von 1.333333 Dollar fuer einen Euro sind 300.00 Euro = 399.99(meine Lösung, in der Lösung des Buches sind die 400.00 Dollar
