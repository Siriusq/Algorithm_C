#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[5],b[5],a1=0,b1=0;
	while(1){
		for(int i=0;i<4;++i){
			a[i]=n%10;
			b[i]=n%10;
			n/=10;
		}
		sort(a,a+4,cmp);
		sort(b,b+4);
		a1=a[0]*1000+a[1]*100+a[2]*10+a[3];
		b1=b[0]*1000+b[1]*100+b[2]*10+b[3];
		n=a1-b1;
		printf("%04d - %04d = %04d\n",a1,b1,n);
		if(n==0 || n==6174) break;
	}
	return 0;
}
