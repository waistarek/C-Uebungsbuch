#include<stdio.h>

int main(void)
{
	
	double eingabe;	
	printf("Geben Sie eine Gleitpunktzahl ein: ");
	scanf("%lf", &eingabe);
        printf("%.2lf\n%.2E\n", eingabe, eingabe);
        printf("%lf\n%E\n", eingabe, eingabe);
	
	       

	return 0;

}
