#include<stdio.h>

int main(void)
{
	double brutto= 500.00, netto, mwst, mwst_satz = 0.19;
	netto = brutto/(1 + mwst_satz);
	mwst = brutto - netto;

	printf("Brutto: %f.\nNetto: %f.\nMehrwertsteuer: %f.\nMehrwertstreuersatz: %f.", brutto, netto, mwst, mwst_satz);


	return 0;

}
