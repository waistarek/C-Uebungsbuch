//3.7)Was bewirkt der folgende Aufruf der Funktionen srand() und time()?
//Hinweis: Der Aufruf time(NULL) der Standardfunktion time() liefert die Anzahl Sekunden seit einem bestimmten Zeitpunkt,gewöhnlich seit dem 1.1.1970, 0:00 Uhr. Der Klammerausdruck (unsigned int) konvertiert diese Zahl in den Typ unsigned int, also in den richtigen Typ für das Argument der Funktion srand().
//
//Lösung im Buch:Die Funktion srand() initialisiert den Zufallsgenerator mit der aktuellen Anzahl Sekunden, die die Funktion time() zurückgibt. Dadurch liefert der Zufallsgenerator bei einem erneuten Aufruf des Programms andere Zufallszahlen, sofern zwischen den Aufrufen mindentens eine Sekunde vergangen ist.
#include<stdlib.h>  // Prototyp von srand()
#include<time.h>   // Prototyp von time()


int main(void)
{
	int z =	srand((unsigned int)time(NULL));
	printf("z %d", z);	

	return 0;

}
