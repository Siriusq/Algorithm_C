#include <stdio.h>
int main(void)
{
        int a,b,n;
        scanf("%d",&n);
        getchar();

        for(b=1; b<=n; b++){
                for(a=1; a<=n; a++){
                        int s=a*b;
                        if(s==n*n){
                                printf("%d*%d=%-4d",a,b,s);
                                break;
                        }
                        else if(b>=a){
				printf("%d*%d=%-4d",a,b,s);
                        }
                }
		printf("\n");
        }
return 0;
}

