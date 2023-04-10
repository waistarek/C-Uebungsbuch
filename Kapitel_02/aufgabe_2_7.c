#include<stdio.h>
#include<float.h>

int main(void)
{
	printf("      Minimum		Maximum		   FLT_DIG \n"
        "float %E	%E	  %d        "
	       	,FLT_MIN,FLT_MAX,FLT_DIG);
	printf("-------------------------------------------------\n");
   printf("double %E       %E        %d        ",

		 DBL_MIN,DBL_MAX,DBL_DIG);
	return 0;

}
