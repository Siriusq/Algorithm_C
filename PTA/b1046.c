#include <stdio.h>
int main(void)
{
	int n,j1,j2,y1,y2,i;
	int j=0,y=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d %d %d %d",&j1,&j2,&y1,&y2);
		if(j2 == j1+y1 && y2 != j1+y1) j++;
		else if(y2 == j1+y1 && j2 != j1+y1) y++;
	}
	printf("%d %d",y,j);
	return 0;
}
