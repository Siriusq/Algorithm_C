#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a != b && a != c)
	{
		printf("A\n");
	}
	else if (a == c)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}

	return 0;
}
