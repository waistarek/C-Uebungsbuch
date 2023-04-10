#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(void)
{
	//Meine Lösung
	/*double ls;
	double tangen;
	double turmhoehe;
	printf("Please enter the length of shadow!\n");
	
	scanf("%lf",&ls);
	printf("Please enter the tangen!\n");
		scanf("%lf",&tangen);
	if(tangen < 0 || tangen > 360){
		printf("Please enter a number between 0 and 360\n");		
		scanf("%lf",&tangen);
	}
	double gInsB = tangen * (M_PI / 180);
	bool a = -1 < 0;
	bool b = 0 > 2;
	printf("a ist %b und b ist %b.\n", a,b);
	turmhoehe = ls * tan(gInsB); 
	printf("Das ist ls %lf und tangen %lf\n\n", ls, tangen);	
	printf("Die Turmhoehe ist %lf.\n");*/
	//Lösung im Buch
	double turmhoehe = 0, schattenlaenge = 0, winkel = 0;
	const double pi = 3.1415927;

	printf("*** Berechnung der Turmhoehe ***\n\n");

	//Schattenlaenge vom Anwender einlesen:
	printf("Schattenlaenge des Turms ( in Meter):	");
	scanf("%lf", &schattenlaenge);


	// Ebenso den Winkel:
	printf("Winkel der Sonne zum Horizont (in Grad): ");
	scanf("%lf",&winkel);


	//Berechnung der Turmhöhe. Vor dem Aufruf von tan()
	//wird der Winkel von Grad in Bogenmaß umgerechnet.
	turmhoehe = schattenlaenge * tan(winkel * (pi/180));

	printf("Die Hoehe des Turms: %.2f Meter\n", turmhoehe);
	return 0;

}
