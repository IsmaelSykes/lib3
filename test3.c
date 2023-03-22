#include <stdio.h>
#include "lib3.h"

int main(void)
{
	printf("Test lib3 \n");
	int a = 10, b = 3, c = 0;
	moding(a,b,&c);
	printf("Moding: %d \n",c);
	return 0;
}