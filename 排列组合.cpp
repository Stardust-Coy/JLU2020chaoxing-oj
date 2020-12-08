#include <stdio.h>
long long jiecheng(int x){
	if(x<=0)return 1;
	long long sum=1;
	for(int i=2;i<=x;i++){
		sum*=i;
	}
	return sum;
}
long long c(int a,int b){
	return jiecheng(a)/jiecheng(b)/jiecheng(a-b);
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(n<0){
		printf("0");
		return 0;
	}
	if(n==0){
		printf("1");
		return 0;
	}
	if(n==1){
		printf("%d",m);
		return 0;
	}
	if(m<2*n){
		printf("%lld",c(m,m-n));
		return 0;
	}
	if(m>=2*n){
		printf("%lld",c(m-1,n-1)+c(m-1,n));
		return 0;
	}
	return 0;
}
