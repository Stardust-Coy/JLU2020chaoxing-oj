#include <stdio.h>
int n,k;
int sum=0;
void jie(int x){
	if(x<=k)return;
	sum++;
	int t=(int)(x/5.0*2+0.5);
	jie(t);
	jie(x-t);
}
int main(){
	scanf("%d%d",&n,&k);
	jie(n);
	printf("%d",sum+1);
	return 0;
}
