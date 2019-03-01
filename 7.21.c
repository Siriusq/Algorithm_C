#include <stdio.h>
int main(void)
{
	int x,y,n;
	int ok=0;
	scanf("%d",&n);
	getchar();
	for(x=0; x<100; x++){
		for(y=0; y<100; y++){
			if((x*x+y*y-n)==0 && x<=y && x!=0 && y!=0){
				printf("%d %d\n",x,y);
				ok=1;
			}
		}
	}

	if(ok==0){
		printf("No Solution");
	}

	return 0;
}

	
	

