#include <stdio.h>

double a3,a2,a1,a0;
double f(double a){
	return a3*a*a*a+a2*a*a+a1*a+a0;
}

int main(void)
{
	double a,b;
	int judge=1;
	scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
	scanf("%lf %lf",&a,&b);
	while((b-a)>0.001){
		if(f((a+b)/2)==0){
			printf("%lf",(a+b)/2);
			judge=0;
			break;
		}
		else if((f((a+b)/2))*(f(a))>0){
			a=(a+b)/2;
		}
		else if((f((a+b)/2))*(f(b))>0){
			b=(a+b)/2;
		}
	}
	if(judge)
		printf("%.2lf",(a+b)/2);
	return 0;
}

