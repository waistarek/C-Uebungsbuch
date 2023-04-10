#include <stdio.h>

void myFunction(void);
int a = 100;

int main()
{

	int b = 10;
	myFunction();						//Ausgabe: In myFunction(): a = 120, b = 30
	printf("In main():	a = %d, b = %d\n", a, b);	//         In main(): a = 120, b = 10:
								//         In myFunction(): a = 120, b = 30
	myFunction();
	return 0;
}

void myFunction()
{
	int b = 20;
	a = a + b;
	b = b + 10;
	printf("In myFunction(): a = %d, b = %d\n", a, b);
}

									  /*In myFunction(): a = 120, b = 30
									    In main():      a = 120, b = 10
									    In myFunction(): a = 140, b = 30*/

