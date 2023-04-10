3.1) Wie lauten die Prototypen folgender Funktionen?

a)Die Funktion median3() liefert den mittleren Wert von drei double-Werten, die als Argumente übergeben werden.
Prototyp: double median3(double x,double z, double f);
Prototyp im Buch:double median3(double, double, double);


b)Die Funktion logStatus() schreibt die aktuelle Zeit und den Status des Programms in eine Protokolldatei. Die Funktion hat keinen Parameter und keinen Return-Wert.
Prototyp: logStatus()

Prototyp im Buch:void logStatus(void);


c)Die Funktion geradensteigung() liefert die Steigung einer Geraden durch zwei Punkte in der Ebene. Die Koordinaten der zwei Punkte x1,y1,x2,y2 werden der Funktin als double-Werte übergeben.

Prototyp:Punkt geradensteigung(double x1, double y1, double x2, double y2); 

Prototyp im Buch:double geradensteigung(double x1, doubley1, double x2, double y2);


d)Die Funktion ggt() bestimmt den größten gemeinsamen Teiler von zwei ganzen Zahlen, die al Argumente übergeben werden.

Prototyp: int ggt(int zahl1, int zahl2);

Prototyp im Buch:int ggt(int , int );


e)Die Funktion geomReihe() liefert das n-te Element s#n einer normierten geometrischen Reihe, also den Wert q^0 + q^1 ... +q^n. Als Argument erhält die Funktion die Gleitpunktzahl q und die ganze Zahl n.

Prototyp: int geoReihe(double q, int n);

Prototyp im Buch:double geomReihe(double q, int n);



f)Die Funktion InitApplication() initialisiert die Anwendung. Sie erhählt kein Argument und liefert true zurück, falls die Initialisierung erfolgreich war, anderfalls false. Die Konstanten true und false sind vom Typ bool, der zusammen mit den Konstanten in der Standard-Header-Datei stdbool.h definiert ist.

Prototyp: bool InitApplication()
Prototyp im Buch: #include <stdbool.h>
		  bool InitApplication(void);


