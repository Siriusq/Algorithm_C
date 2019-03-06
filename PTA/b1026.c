#include <stdio.h>
int main(void)
{
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	int c=(c2-c1)/100.0+0.5;
	printf("%02d:%02d:%02d",c/3600,c%3600/60,c%60);
	return 0;
}
