#include <stdio.h>
int main(void)
{
	int t,i,w,r;//t=T w=wugui r=tuzi
	scanf("%d",&t);
	getchar();
	r=10;
	if(t<10){
		printf("^_^ %d",9*t);
		return 0;
	}
	else{
		for(i=10; i<=t; i++){
			if(i%10==0){
				if(r*9>i*3 && (t-i)>=30){
					i+=29;
				}
				else if(r*9>i*3 && (t-i)<30){
					i=t;
					break;
				}
				else if(r*9<i*3 && (t-i)>=10){
					r+=10;
					i+=9;
				}
				else if(r*9<i*3 && (t-i)<10){
					r+=t-i;
					i=t;
					break;
				}
			}
		}
	}
	if(r*9>i*3){
		printf("^_^ %d",r*9);
	}
	if(r*9<i*3){
		printf("@_@ %d",i*3);
	}
	if(r*9==i*3){
		printf("-_- %d",i*3);
	}
	return 0;
}
				
