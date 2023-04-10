#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c %d\n", c, c);//-> A 65
	c = c + 1;
	printf("%c %d\n", c, c);//-> B 66
	c = c + ('a' - 'A');
	printf("%c %d\n", c, c);//-> b 98
	return 0;
}
