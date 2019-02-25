#include <stdio.h>
int main(void)
{
	int y,h;
	float s=0;
	scanf("%d %d",&y,&h);
	getchar();
	if(y < 5 && h <= 40)
	{
		s=30*h;
		printf("%.2f",s);
	}
	else if(y >= 5 && h <= 40)
	{
		s=50*h;
		printf("%.2f",s);
	}
	else if(y < 5 && h > 40)
	{
		s=30*40+(h-40)*30*1.5;
		printf("%.2f",s);
	}
	else
	{
		s=50*40+(h-40)*50*1.5;
		printf("%.2f",s);
	}
	return 0;
}
