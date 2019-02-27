#include <stdio.h>
int main(void)
{
	int n = 0;
	double i,f,pi;
	double up=1,down=1;
	double sum=0;
	while(~scanf("%lf",&i)){
		for(f=1; f >= i; n++){
			if(n == 0){
				up = 1;
			}
			else{
				up = up * n;
			}
			down = down * (2*n+1);
			f = up/down;
			sum = sum + f;
		}
		pi = sum * 2;
		printf("%6f\n",pi);
		break;
	}
	return 0;
}
