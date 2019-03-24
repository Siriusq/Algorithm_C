#include <stdio.h>
#include <ctype.h>
int main()
{
	char a[61],b[61],c[61],d[61];
	scanf("%s %s %s %s",a,b,c,d);
	char *week[]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	int day;
	for(day=0;a[day]&&b[day];++day){//print day;
		if(a[day]==b[day]&&a[day]>='A'&&a[day]<='G'){
			printf("%s ",week[a[day]-'A']);
			break;
		}
	}
	int hh;
	for(hh=day+1;a[hh]&&b[hh];++hh){//print hour;
		if(a[hh]==b[hh]){
			if(a[hh]>='A'&&a[hh]<='N'){
				printf("%02d:",a[hh]-'A'+10);
				break;
			}
			if(isdigit(a[hh])){
				printf("%02d:",a[hh]-'0');
				break;
			}
		}
	}
	int mm;
	for(mm=0;c[mm]&&d[mm];++mm){//print minute;
		if(c[mm]==d[mm]&&isalpha(c[mm])){
			printf("%02d",mm);
			break;
		}
	}
	return 0;
}
