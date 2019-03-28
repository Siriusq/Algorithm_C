#include <stdio.h>
int main(){
	int n;
	int a[1000];
	scanf("%d",&n);
	int count=0,number=n;
	for(int i=0;i<n;++i)
		a[i]=i+1;
	while(number>1){
		for(int i=0;i<n;++i){
			if(a[i]==0) continue;
			++count;
			if(count==3){
				a[i]=0;
				count=0;
				--number;
			}
		}
	}
	for(int i=0;i<n;++i){
		if(a[i]!=0)
			printf("%d",a[i]);
	}
	return 0;
}
