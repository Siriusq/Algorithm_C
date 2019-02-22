#include <stdio.h>
int main(void)
{
	int cm,foot,inch;
	scanf("%d",&cm);
	getchar();
	foot=cm/30.48;
	inch=(cm/30.48-foot)*12;
	printf("%d %d\n",foot,inch);
	return 0;
}
