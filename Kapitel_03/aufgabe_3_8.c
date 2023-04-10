//3.8) 
#include<stdio.h>
#include<math.h>

int main(void)
{
	//Meine Lösung
	/*	
	int a = 1, b = 10, c = 100;

	printf("x	log(x)	exp(x)\n"
			"---------------------------------\n"
			"%d	%f	%E\n"
			"%d	%f	%E\n"
			"%d	%f	%E\n",
			a, log(a), exp(a),
			b, log(b), exp(b),
			c, log(c), exp(c));*/
	//Lösung im Buch
	double x = 1.0, y1, y2;

	y1 = log(x);
	y2 = exp(x);
	printf(" x	log(X)	exp(x)\n"
			"- - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf(" %f	%f	%E\n", x, y1, y2);

	x = 10.0;
	y1 = log(x);
	y2 = exp(x);
	printf(" %f	%f	%E\n", x, y1, y2);
	

	x = 100.0;
	y1 = log(x);
	y2 = exp(x);
	printf(" %f	%f	%E\n", x, y1, y2);


	return 0;

}
