#include <stdio.h>
int main(void)
{
	float x,y;
	scanf("%f",&x);
	if(x <= 15)
	{
		y = 4*x/3;
		printf("%.2f",y);
	}
	else
	{
		y=2.5*x-17.5;
		printf("%.2f",y);
	}
	return 0;
}
