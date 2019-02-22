#include <stdio.h>
int main(void)
{
	int o,rev;//o is order,rev is reserve
	scanf("%d",&o);
	getchar();
	rev=o/100+(o%100)/10*10+o%10*100;
	printf("%d",rev);
	return 0;
}
