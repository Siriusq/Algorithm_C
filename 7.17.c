#include <stdio.h>
int main(void)
{
	int n,u,d,i;
	int h = 0;
	scanf("%d %d %d",&n,&u,&d);
	getchar();
	for(i=1; h < n; i++){
		h+=u;
		if(h<n){
			h-=d;
			i++;
		}
		else break;
	}
	printf("%d",i);
	return 0;
}

