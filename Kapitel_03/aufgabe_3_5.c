//3.5) Nicht alle der folgenden Funktionsaufrufe sind korrekt. Wo liegen die Fehler?
  
#include<stdio.h>
//a)
//Prototyp von putchar(): int putchar(int);
putchar("Z");
putchar bekommt ein Argument vom Typ int und nicht von String übergeben.Richtig ist:  puchtchar('Z');


//b)
//Prototyp von srand(): void srand(unsigned int);
int z = srand(77U);
//Meine Lösung:Die Methode srand() bekommt ein Argument vom Typ int und lierfert kein int und deswegen kann nicht in int-Variable gespeichert werden.
//Lösung im Buch: Die Funktion srand() besitzt keinen Return-Wert. Er kann daher auch nicht an eine Variable zugewiesen werden.

//c)
// Prototyp von tan(): double tan(double);

double pi = 3.141593, angle = 31.5;
double y = tan( angle * (pi/180));
// c ist korrekt.


//d)
int printDoc(void);
printDoc("Memo.txt");
//Die Methode bekommt gar kein Argument.


//e)

double mittelwert(double, double, double);
double ergebnis = mittelwert(1.7, 3.2);
//Es fehlt noch ein Argument.
