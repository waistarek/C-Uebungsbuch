
//3.7)Schreiben Sie ein C-Programm, das zunächst den Zufallsgenerator wie in der vorhergehenden Aufgabe initialisiert und dann drei einfache Additionsaufgaben mit Zufallszahlen zwischen 10 und 99 stellt.
//
//Zusatzfrage: Erzeugt das Programm bei einem erneuten Aufruf dieselben Additionsaufgaben?
//
//Hisweis: Die Modulo-Division % liefert den Rest einer ganzzahligen Division. Zum Beispiel ergibt 18%5 den Wert 3. In welchem Bereich liegt dann das Ergebnis des Ausdrucks z%90+10 für eine beliebige positive Ganzzahl z? 
#include<stdlib.h>  // Prototyp von srand()
#include<time.h>   // Prototyp von time()
#include<stdio.h>

int main(void)
{
	//Meine Lösung	
	/*int z = rand();
	printf("Return-Wert von rand()  %d",z); 
	for(int i = 0; i < 4; i++){

		while (z < 10 && z > 99){
		int result = z + (int)(srand((unsigned int)time(NULL)));
		printf(" Das Maximum %d",result); 
	
		}
	}*/	
	//Lösung im Buch:
	int z1, z2;

	srand((unsigned int) time(NULL));
	
	printf("Loesen Sie folgende Additionsaufgaben!\n");
	printf("Zur Kontrolle: Ergebnis in Klammern.\n\n");

	z1 = 10 + rand() % 90;// Zwei Zufallszahlen im 
	z2 = 10 +  rand() % 90;	// Bereich von 10 bis 90.
	
	printf("%d + %d = \n",z1, z2); // Die Additionsaufgabe.
	printf("(%d)\n", z1 + z2);      // Das Ergebnis zur Kontrolle.
	// Und noch zwei Augaben.	
	z1 = 10 + rand() % 90;// Zwei Zufallszahlen im 
	z2 = 10 +  rand() % 90;	// Bereich von 10 bis 90.
	
	printf("%d + %d = \n",z1, z2); // Die Additionsaufgabe.
	printf("(%d)\n", z1 + z2);      // Das Ergebnis zur Kontrolle.
	z1 = 10 + rand() % 90;// Zwei Zufallszahlen im 
	z2 = 10 +  rand() % 90;	// Bereich von 10 bis 90.
	
	printf("%d + %d = \n",z1, z2); // Die Additionsaufgabe.
	printf("(%d)\n", z1 + z2);      // Das Ergebnis zur Kontrolle.
	return 0;

}
