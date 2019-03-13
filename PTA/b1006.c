#include <stdio.h>
int main(void)
{
	int n,g,s,b;
	scanf("%d",&n);
	g=n%10;
	s=n%100/10;
	b=n/100;
	if(b>0){
		for(int i=0;i<b;i++) printf("B");
	}
	if(s>0){
		for(int i=0;i<s;i++) printf("S");
	}
	if(g>0){
		for(int i=1;i<=g;i++) printf("%d",i);
	}
	return 0;
}
	

