#include "stdafx.h"
#include <stdio.h>
int i,c;
int Next_multiple,j;
int f1(int i,int j)
{
	Next_multiple=i+j-i%j;
	return Next_multiple;

}
int main(void)
{
	i=365;j=7;
	c=f1(i,j);
	printf("if i=365,j=7>>c=%d\n", c);
	i=12.258;j=23;
	c=f1(i,j);
	printf("if i=12.258,j=23>>c=%d\n", c);
	i=996;j=4;
	c=f1(i,j);
	printf("if i=996,j=4>>c=%d\n", c);
	
	return 0;
}