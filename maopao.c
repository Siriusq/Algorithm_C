#include <stdio.h>
int main(void)
{
	int a[10] = {3,1,4,5,2};
	int i,j;
	for(i = 1; i<=4; i++){
		for(j = 0; j <5 - i; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i = 0; i <5; i++){
		printf("%d", a[i]);
	}
	return 0;
}

