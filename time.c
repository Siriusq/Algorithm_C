#include <stdio.h>
int main(void)
{
	int now,min,trans,future;
	scanf("%d %d",&now,&min);
	getchar();
	trans=now%100+now/100*60+min;
	future=trans/60*100+(trans-trans/60*60);
	printf("%d",future);
	return 0;
}
