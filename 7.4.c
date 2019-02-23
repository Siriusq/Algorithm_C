#include <stdio.h>
int main(void)
{
	int x,o;
        scanf("%d",&x);
	getchar();
	o=x/16*10+x%16;
	printf("%d",o);
	return 0;
}
