#include "lib3.h"

void moding(int x, int y, int * r)
{
	*r = x/y;
}


void mean(int *data, int length, int *r)
{
	int m = 0;
	for(int i = 0; i<= length-1; i++)
		m+= *(data++);
	*r = m/length;
}