
#include <stdio.h>
 
int main()
{
    char a[10][10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int b[20];
    int number,n,r_number;
    n = 0;
   
    scanf("%d",&number);
 
    r_number = number;
    
    if(number < 0)
    number = number * -1;
    if(number == 0) 
    {
        b[n] = 0;
        n++;
    }
    while(number != 0)
    {
        b[n] = number % 10;
        number = number / 10;
        n++;
    }
    if(r_number < 0)
    {
        printf("fu ");
    }
    for(int i = n-1; i >= 0; i--)
    {
        printf("%s",a[b[i]]);
        if(i != 0) printf(" "); 
    }
    return 0;
}
