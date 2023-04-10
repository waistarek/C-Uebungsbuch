#include <stdio.h>

int main(void)
{
	//a)
/*int INT =0x100;
printf("Das ist INT = 0x100; und ist richtig definiert: %d",INT);Es ist gültig*/
//b)
/*unsigned char code =300;Wert 300 ist zu groß: Wertebereich von unsigned char
 * :0 bis 0xFF =255.
printf("Das ist unsigned char code = 300; und ist nicht richtig definiert: %c",code);Es ist nicht gültig*/
//c)									       
/*short zeichen = '\\';
printf("Das ist short zeichen = '\\'; und ist richtig definiert: %c",zeichen);Es ist gültig*/
//d)
/*int li = 0, 2i = -1;Das erste Zeichen vom Variabennamen darf kein Ziffer sein.
printf("Das ist int li = 0, 2i = -1; und ist nicht richtig definiert: %d, %d",li,2i);Es ist nicht gültig.*/
// e)
/*short gültig = 40000;Die Größe von short ist 2 Bytes und Wertebereich -32768 bis 32767.((2^16)/2)(auch unzulässiger Name)
printf("Das ist short gültig = 40000; und ist nicht richtig definiert: %d",gültig);//Es ist nicht gültig.*/
//f)
/*float Result = 1234.56789;Der Typ float besitzt nur eine Genauigkeit von 6 Dezimalstellen.
printf("Das ist float Result = 1234.56789 und ist  richtig definiert: %f",Result);Es ist  gültig.*/

//g)
/*long long goto = 10000;goto ist ein Schlüsselwort von C.
printf("Das ist long long goto = 10000 und ist nicht richtig definiert: %d",goto);//Es ist nicht gültig.*/
										  //h)
										 /* long file = "MeineBilder";Eine numerische Variable kann nicht mit einem String initialisiert werden.

printf("Das ist long file = \"MeineBilder\" und ist nicht richtig definiert: %d",file);//Es ist nicht gültig.*/
										  //i)
/*										 double top-left = 10.5; Bindestriche sind in Namen nicht zulässig.
										       
printf("Das ist double top-left = 10.5 und ist nicht richtig definiert: %d",top-left);//Es ist nicht gültig.*/
										 //j)
										 long double size = 706*975;Es ist richtig aber man muss auf das Format Lf für long double achten.
printf("Das ist double top-left = 10.5 und ist  richtig definiert: %Lf",size);//Es ist  gültig.
}
