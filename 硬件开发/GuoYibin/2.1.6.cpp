#include<stdio.h>

int main()
{

	int a=9;
	float x=3.5;
	float y=7.7;
	float z;
	
	z=x+a%5*(int)(x+y)/4;
	
	printf("%lf",z);


	return 0;
}