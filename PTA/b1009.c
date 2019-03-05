#include <stdio.h>
int main(void)
{
	char str[90][90];
	int i,n=0;
	while(scanf("%s",str[n])!=EOF){
		n++;
	}
	for(i=n-1; i>=0; i--){
		printf("%s",str[i]);
		if(i>0) printf(" ");
	}
	return 0;
}
