#include <stdio.h>
int main(void)
{
	int s,e;
	int sum = 0;
	int index = 0;
	scanf("%d %d",&s,&e);
	getchar();
	for (int i = s; i <= e; i++)
	{
		index++;
		if (index % 5 != 0)
		{
			if ((index-1) % 5 == 0 && index != 1)
			{
				printf("\n");
			}
			printf("%5d",i);
		}
		else
		{
			printf("%5d",i);
		}
		sum += i;
	}
	printf("\nSum = %d",sum);
	return 0;
}

