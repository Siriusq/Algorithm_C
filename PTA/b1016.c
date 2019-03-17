#include <stdio.h>
#include <math.h>
int main()
{
	 int a,b,da,db;
	 int pa=0,pb=0;
	 int counta=0,countb=0;
	 char sa[64];
	 char sb[64];
	 scanf("%d %d %d %d",&a,&da,&b,&db);
	 getchar();	 
	 sprintf(sa,"%d",a);
	 sprintf(sb,"%d",b);
	 for(int i=0; i<11;i++){
		 if((sa[i]-'0')==da){
			 counta++;
		 }
	 }
	 for(int i=0; i<11;i++){
		 if((sb[i]-'0')==db){
			 countb++;
		 }
	 }
	 for(int j=0; j<counta; j++){
		 int sum=da*pow(10.0,j);
		 pa+=sum;
	 }
	 for(int j=0; j<countb; j++){
		 int sum=db*pow(10.0,j);
		 pb+=sum;
	 }
	 int x=pa+pb;
	 printf("%d",x);
	 return 0;
}
