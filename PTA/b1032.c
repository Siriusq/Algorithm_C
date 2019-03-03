#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int schID[n];
	for(int i=0; i<n; i++){
		schID[i]=0;
	}
	for(int i=0; i<n; i++){
		int x,score;
		scanf("%d %d",&x,&score);
		schID[x-1] += score;
	}
	int maxx,max=0;
	for(int i=0; i<n; i++){
		if(schID[i]>max){
			maxx=i+1;
			max=schID[i];
		}
	}
	printf("%d %d\n",maxx,max);
	return 0;
}
