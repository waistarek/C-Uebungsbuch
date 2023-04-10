#include<stdio.h>
#include<limits.h>

int main(void)
{
	// Meine Lösung 
/*	printf("Der Wertbereich von char ist von %d bis zu %d und der Speicherplatz von char ist %d.\n", CHAR_MIN, CHAR_MAX, sizeof(char));
	printf("Der Wertbereich von int ist von %d bis zu %d und der Speicherplatz von int ist %d.\n\n", INT_MIN, INT_MAX, sizeof(int));*/

	//Lösung im Buch
	printf("Groesse und Wertebereich "
		"der Typen char und int\n\n");
	printf("Typ 	Speicherplatz 	Minimum     	Maximum\n"
		"-------------------------------------------------\n");
	printf("char 	     %d		%d 	    	%d\n",

		  sizeof(char),CHAR_MIN,CHAR_MAX);
	
	printf("char 	     %d		%d 	%d\n",

		  sizeof(int),INT_MIN,INT_MAX);



	return 0;
}
