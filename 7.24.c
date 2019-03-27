#include <stdio.h>
int main(){
	int a,b,i;
	scanf("%d/%d",&a,&b);
	if(a==b) printf("%d/%d",1,1);
	else{
		for(i=b;i>1;--i){
			if(a%i==0 && b%i==0){
				a=a/i;
				b=b/i;
			}
		}
		printf("%d/%d",a,b);
	}
	return 0;
}
