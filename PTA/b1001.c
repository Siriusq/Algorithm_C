#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=0; i<1000; i++){
		if(n==1){
			printf("%d",i);
			break;
		}
		else if(n%2 == 0){
			n=n/2;
		}
		else if(n%2 == 1){
			n=(3*n+1)/2;
		}
	}
	return 0;
}


