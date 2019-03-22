#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	int i;
	char s[85];
		scanf("%d",&n);
		getchar();
		for(i=0;i<n;i++){
		memset(s,0,sizeof(s));	
		gets(s);
		int len=strlen(s);		
		if(len<6){
			printf("Your password is tai duan le.\n"); 
			continue;
		}
		else{
			int j;
			int flag1=0,flag2=0,flag3=0,flag4=0;
			for(j=0;j<len;j++){	
				if(s[j]=='.'){
					flag1=1;
				}
				else if(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z'){
					flag2=1;
				}
				else if(s[j]>='0'&&s[j]<='9')
					flag3=1;
				else 
					flag4=1;
			}
			if(flag4){
				printf("Your password is tai luan le.\n");	
				continue;
			}	
			else if(flag2&&!flag3&&!flag4){
				printf("Your password needs shu zi.\n");
				continue; 
			}						
			else if(!flag2&&flag3&&!flag4){
				printf("Your password needs zi mu.\n"); 
				continue;
			}				
			else if((flag2&&flag3&&!flag4)||(flag1&&flag2&&flag3&&!flag4)){
				printf("Your password is wan mei.\n");
				continue;
			}
		}	
		}
	return 0;	
}
