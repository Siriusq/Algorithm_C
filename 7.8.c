#include <stdio.h>
int main(void)
{
	int s;
	scanf("%d",&s);

	if (s <= 60)
	{
		printf("Speed: %d - OK\n",s);
	}
	else
	{
		printf("Speed: %d - Speeding\n",s);
	}

	return 0;
}
