#include <stdio.h>
int main(void)
{
	int a,b,d,i;
	scanf("%d %d %d",&a,&b,&d);
	getchar();
	int sum=a+b;
	int n=0;
	int temp[31];
	do{
		temp[n++]=sum%d;
		sum/=d;
	}while(sum!=0);
	for(i=n-1; i>=0; i--){
		printf("%d",temp[i]);
	}
	return 0;
}
