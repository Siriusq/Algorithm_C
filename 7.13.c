#include <stdio.h>
int main(void)
{
	float c,o,h,l;
	scanf("%f %f %f %f",&o,&h,&l,&c);
	getchar();

	{
	if(c > o)
	{
		printf("R-Hollow");
	}
	else if (c < o)
	{
		printf("BW-Solid");
	}
	else
	{
		printf("R-Cross");
	}
	}

	{
	if((l < o && l <c) && (h > o && h > c))
	{
		printf(" with Lower Shadow and Upper Shadow\n");
	}
	else if(l < o && l < c)
	{
		printf(" with Lower Shadow\n");
	}
	else if(h > o && h > c)
	{
		printf(" with Upper Shadow\n");
	}
	else
	{
		printf("\n");
	}
	}
	return 0;
}
