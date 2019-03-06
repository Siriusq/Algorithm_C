#include <stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d %d",&n,&m);
	m=m%n;
	int a[110];
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(i=n-m; i<n; i++){
		printf("%d",a[i]);
		j++;
		if(j<n){
			printf(" ");
		}
	}
	for(i=0; i<n-m; i++){
		printf("%d",a[i]);
		j++;
		if(j<n){
			printf(" ");
		}
	}
	return 0;
}
