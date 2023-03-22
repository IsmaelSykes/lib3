#include <stdio.h>
#include "lib3.h"

int main(void)
{
	printf("Test lib3 \n");
	int a = 10, b = 3, c = 0;
	moding(a,b,&c);
	printf("Moding: %d \n",c);
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	mean(array,10,&c);
	printf("Mean: %d \n",c);

	return 0;
}