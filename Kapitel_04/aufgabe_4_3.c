#include <stdio.h>

int main(void)
{

	long nummer = 0L;
	double preis = 0.0;

	printf("Artikelnummer: ");
	scanf("%ld",&nummer);
	printf("Artikelpreis: ");

	scanf("%lf", &preis);

	printf("\n%-20s%s\n", "Artikelnummer", "Artikelpreis");

	printf("- - - - - - - - - - - - - - - - - - - - - -\n");
	
	printf("%-20ld%.2f\n", nummer, preis);


	return 0;

}
