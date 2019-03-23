#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100],c[100],d[100];
	int hh,mm;
	char day;
	int f1=0,f2=0;
	scanf("%s %s %s %s",a,b,c,d);
	int la=strlen(a),lb=strlen(b),lc=strlen(c),ld=strlen(d);
	for(int i=0;i<la;++i){
		if(a[i]>='A' && a[i]<='G'){
			for(int j=0;j<lb;++j){
				if((b[j]>='A' && b[j]<='G') && a[i]==b[j]){
					day=a[i];
					f1=i+1,f2=j+1;
				}
			}
		break;
		}
	}
	for(int x=f1;x<la;++x){
		if((a[x]>='A' && a[x]<='N') || (a[x]>='0' && a[x]<='9')){
			for(int y=f2;y<lb;++y){
				if(b[y]>='A' && b[y]<='N' && a[x]==b[y]){
					hh=a[x]-'A'+10;
					break;
				}				
				if(b[y]>='0' && b[y]<='9' && a[x]==b[y]){
                                        hh=a[x]-'0';
                                        break;
				}
			}
		break;
		}
	}
	for(int m=0;m<lc;++m){
		if((c[m]>='A' && c[m]<='Z') || (c[m]>='a' && c[m]<='z')){
			for(int n=0;n<ld;++n){
				if(((d[n]>='A' && d[n]<='Z') || (d[n]>='a' && d[n]<='z')) && c[m]==d[n]){
					mm=n;
				}
			}
		break;
		}
	}
	switch(day){
		case 'A':
		       	printf("MON ");
			break;
		case 'B':
		       	printf("TUE ");
			break;
		case 'C':
		       	printf("WED ");
			break;
		case 'D':
		       	printf("THU ");
			break;
		case 'E':
		       	printf("FRI ");
			break;
		case 'F':
		       	printf("SAT ");
			break;
		case 'G':
		       	printf("SUN ");
			break;
	}
	char hour[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
	/*
	for(int h=0;h<24;++h){
		if(hh==hour[h]-'0'){
		       printf("%02d:",h);
		}
	}*/
	printf("%02d",hh);
	printf("%02d",mm);
	return 0;
}
