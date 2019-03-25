#include <stdio.h>
int main()
{
	int a,b,x;
	scanf("%d %d",&a,&b);
	x=a*b;
	while(!(x%10))
		x/=10;
	while(x){
		printf("%c",x%10+'0');
		x/=10;
	}
	return 0;
}
