#include <stdio.h>
int main(void)
{
	int n,in,x;
	int arr[5]={0};
	int judge=0;//judge a2!=0
	int count=0;
	int zf=-1;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&in);
		x=in%5;
		switch(x){
			case 0:
				if(in%2==0) arr[0] += in;
				break;
			case 1:
				zf*=-1;
				arr[1] += zf*in;
				judge=1;
				break;
			case 2:
				arr[2]++;
				break;
			case 3:
				count++;
				arr[3]+=in;
				break;
			case 4:
				if(in>arr[4]) arr[4]=in;
				break;
			default:
				break;
		}
	}
	for(int i=0; i<5; i++){
		if(arr[i]==0){
			if(i==1){
				if(judge==0) printf("N");
				else printf("0");
			}
			else printf("N");
		}
		else{
			if(i==3 && count!=0) printf("%.1f",1.0*arr[3]/count);
			else printf("%d",arr[i]);
		}
		if(i!=4) printf(" ");
	}
	return 0;
}


