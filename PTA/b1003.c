#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    int i,j,n,len,P,A,T,x,y;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(a);
        len=strlen(a);
        P = 0;
        A = 0;
        T = 0; 
        x= 0;
        y= 0;
        for(j=0;j<len;j++)
        {
            if(a[j]=='P')
            {
            	P++;
                x= j;
            }
            if(a[j]=='A')
            A++;
            if(a[j]=='T')
            {
                T++;
                y= j;
            }
        }
        if (P+A+T!=len||y-x<=1||P>1||T>1||x*(y-x-1)!=len-y-1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
} 
