#include <stdio.h>
double P(int a,double b){
	if(a==0)return 1.00;
	if(a==1)return b;
	if(a>1)return (((2*a-1)*1.0/a*b*P(a-1,b))-((a-1)*1.0/a*P(a-2,b)));
}
int main(){
	double x;
	int n;
	scanf("%lf%d",&x,&n);
	printf("%.2lf",P(n,x));
	return 0;
}
