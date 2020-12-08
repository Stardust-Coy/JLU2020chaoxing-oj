#include <stdio.h>
int gcd(int x,int y){
	return y==0?x:gcd(y,x%y);
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",gcd(m,n));
	return 0;
}
