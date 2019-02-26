#include <stdio.h>
int main(void)
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	getchar();
	switch(c)
	{
		case('+'):
			printf("%d",a+b);
			break;
		case('-'):
			printf("%d",a-b);
			break;
		case('*'):
			printf("%d",a*b);
			break;
		case('/'):
			printf("%d",a/b);
			break;
		case('%'):
			printf("%d",a%b);
			break;
		default:
			printf("ERROR");
	}
	return 0;
}
