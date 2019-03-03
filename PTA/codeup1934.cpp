#include <cstdio>
const int maxn=210;
int agg[maxn];
int main(void)
{
	int n,x,i,k;
	scanf("%d",&n);
	while(scanf("%d",&n) != EOF){
		for(i=0; i<n; i++){
			scanf("%d",&agg[i]);
		}
	}
	scanf("%d",&x);
	for(k=0; k<n; k++){
		if(agg[k]==x){
			printf("%d\n",k);
			break;
		}
	}
	if(k==n){
		printf("-1\n");
	}
	return 0;
}
