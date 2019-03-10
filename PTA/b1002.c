#include <stdio.h>
void py(int n)
{
	switch(n){
		case 0: printf("ling"); break;
		case 1: printf("yi"); break;
		case 2: printf("er"); break;
		case 3: printf("san"); break;;
		case 4: printf("si"); break;
		case 5: printf("wu"); break;
		case 6: printf("liu"); break;
		case 7: printf("qi"); break;
		case 8: printf("ba"); break;
		case 9: printf("jiu"); break;
		}
}

void read(int num)
{
	if(num<10){
	       	py(num);
	}
	else if(num<100){
		py(num/10);
		printf(" ");
		py(num%10);
	}
	else if(num<1000){
		py(num/100);
		printf(" ");
		py(num%100/10);
		printf(" ");
		py(num%10);
	}
	else if(num<10000){
		py(num/1000);
		printf(" ");
		py(num%1000/100);
		printf(" ");
		py(num%100/10);
		printf(" ");
		py(num%10);
	}
}

int main(void)
{
	char str[100];
	int sum=0;
	int num;
	scanf("%s",str);
	for(int i=0; str[i]!='\0'; i++){
		num=str[i] - '0';
		sum+=num;
	}
	read(sum);
	return 0;
}
