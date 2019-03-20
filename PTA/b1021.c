#include <stdio.h>
int main()
{
	char num[1000];
	int x[10]={0};
	int i=0;
	if(scanf("%s",num));
	for(i=0; num[i]; ++i){
		switch (num[i] - '0')
		{
		case 0: x[num[i] - '0']++; break;
		case 1: x[num[i] - '0']++; break;
		case 2: x[num[i] - '0']++; break;
		case 3: x[num[i] - '0']++; break;
		case 4: x[num[i] - '0']++; break;
		case 5: x[num[i] - '0']++; break;
		case 6: x[num[i] - '0']++; break;
		case 7: x[num[i] - '0']++; break;
		case 8: x[num[i] - '0']++; break;
		case 9: x[num[i] - '0']++; break;
		}
	}
	for(i=0;i<10;++i){
		if(x[i]!=0) printf("%d:%d\n",i,x[i]);
	}
	return 0;
}

