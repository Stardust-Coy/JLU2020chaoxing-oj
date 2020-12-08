#include <stdio.h>
double H(int a,double b){
	if(a==0)return 1.0;
	if(a==1)return 2.0*b;
	if(a>1)return 2.0*b*H(a-1,b)-2.0*(a-1.0)*H(a-2,b);
}
int main(){
	int n;
	double x;
	scanf("%d%lf",&n,&x);
	printf("%.2lf",H(n,x));
	return 0;
}

