#include<stdio.h>
int main()
{
    char c;
    int cot=0,ans[100]= {0},i=0;

    while ((c=getchar())!='.')
    {
        if (c!=' ')
        {
            cot++;
            ans[i]=cot;
        }

        else if (cot!=0)
        {
            i++;
            cot=0;
        }
    }
    i=0;
    if (ans[0]==0)
        return 0;
    else
        while(ans[i]!=0)
        {
            if (i==0)
                printf("%d",ans[i]);
            else
                printf(" %d",ans[i]);
            i++;
       }

    return 0;
}
