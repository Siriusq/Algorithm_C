#include <stdio.h>
int main(void)
{
	int i,j,k,n;
	int x=0;
	scanf("%d",&n);
	getchar();
	int arr[4]={n,n+1,n+2,n+3};

	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			for(k=0; k<4; k++){
				
				if(i!=k && i!=j && k!=j){
					x++;

					if(x%6==0){
						printf("%d%d%d\n",arr[i],arr[j],arr[k]);
					}
					else{
						printf("%d%d%d ",arr[i],arr[j],arr[k]);
					}
				}
			}
		}
	}

	return 0;
}

