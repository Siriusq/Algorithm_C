#include <stdio.h>
#include <string.h>
int main()
{
	int b,q,r=0;
	char a[1001];
	scanf("%s %d",&a,&b);	
	for(int i=0;i<strlen(a);++i){
		q=(10*r+(a[i]-'0'))/b;
		if (!(strlen(a) > 1 && i == 0 && q == 0)) printf("%d",q);
		r=(10*r+(a[i]-'0'))%b;
	}
	printf(" %d\n",r);
	return 0;
}
