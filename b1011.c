#include <stdio.h>
int main(void)
{
	int t,i;
	long long a,b,c;
	scanf("%d",&t);
	for(i=1; i<=t; i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
	}
	return 0;
}
