#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[256];
	int l,ok,i;
	while(scanf("%s",str)!=EOF){
		ok=1;
		l=strlen(str);
		for(i=0; i<l/2;i++){
			if(str[i]!=str[l-1-i]){
				ok=0;
				break;
			}
		}
		if(ok) printf("YES!\n");
		else printf("NO!\n");
	}
	return 0;
}
