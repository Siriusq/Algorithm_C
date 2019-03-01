#include <stdio.h>
int main(void)
{
	int y,f,n;
	scanf("%d",&n);
	int ok=0;
	getchar();
	for(y=0; y<100; y++){
		for(f=0; f<100; f++){
			if((100*f+y-n-100*2*y-2*f)==0){
				printf("%d.%d",y,f);
				ok=1;
				break;
			}
		}
	}

	if(ok){
		printf("\n");
	}
	else{
		printf("No Solution\n");
	}

	return 0;
}
		


