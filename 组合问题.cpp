#include <stdio.h>
long long jiecheng(int a){
	if(a==1)return 1;
	return a*jiecheng(a-1);
}
long long f(int x,int y){
	return jiecheng(x)/jiecheng(x-y)/jiecheng(y);
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if((m>0)&&(n>0)){
		if(m<n)printf("0");
		if(m==n)printf("1");
		if(m>n)printf("%lld",f(m,n));
	}else{
		printf("-1");
	}
	return 0;
}
