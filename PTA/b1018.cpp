#include <cstdio>
int rule(char c){
	if(c=='B') return 0;
	if(c=='C') return 1;
	if(c=='J') return 2;
}

int main(){
	char mp[3]={'B','C','J'};
	int n;
	scanf("%d",&n);
	int jia[3]={0},yi[3]={0};
	int xjia[3]={0},xyi[3]={0};
	char c1,c2;
	int k1,k2;
	for(int i=0; i<n; i++){
		getchar();
		scanf("%c %c",&c1,&c2);
		k1=rule(c1);
		k2=rule(c2);
		if((k1+1)%3==k2){
			jia[0]++;
			yi[2]++;
			xjia[k1]++;
		}
		else if(k1==k2){
			jia[1]++;
			yi[1]++;
		}
		else{
			jia[2]++;
			yi[0]++;
			xyi[k2]++;
		}
	}
	printf("%d %d %d\n",jia[0],jia[1],jia[2]);
	printf("%d %d %d\n",yi[0],yi[1],yi[2]);
	int ij=0,iy=0;
	for(int i=0; i<3;i++){
		if(xjia[i]>xjia[ij]) ij=i;
		if(xyi[i]>xyi[iy]) iy=i;
	}
	printf("%c %c\n",mp[ij],mp[iy]);
	return 0;
}
