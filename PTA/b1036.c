#include <stdio.h>
int main(void)
{
	int n,h,n2,i,c;
	scanf("%d %c",&n,&c);
	getchar();
	if(n%2==0) n2=n/2;
	else n2=(n+1)/2;
	for(h=1; h<=n2; h++){
		if(h==1 || h==n2){
			for(i=1; i<=n; i++){
				printf("%c",c);
			}
		}
		else{
			printf("%c",c);
			for(i=2; i<n; i++){
				printf(" ");
			}
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}
