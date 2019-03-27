#include <stdio.h>
int main(){
	int k,n,temp=0;
	int i,j;
	int a[100];
	scanf("%d %d",&n,&k);
	getchar();
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;++i){
		for(j=0;j<n-1;++j){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;++i){
		printf("%d",a[i]);
		if(i<n-1) printf(" ");
	}
	return 0;
}
