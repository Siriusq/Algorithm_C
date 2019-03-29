#include <stdio.h>
#include <string.h>
int main(){
	char a[85];
	char b[85];
	char c[85];
	char *p;
	gets(a);
	gets(b);
	while((p=strstr(a,b))!=NULL){
		strcpy(c,p+strlen(b));
		*p='\0';
		strcat(a,c);
	}
	puts(a);
	return 0;
}

