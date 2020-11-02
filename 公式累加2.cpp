#include <stdio.h>
#include <math.h> 
int main(){
	double x;
	scanf("%lf",&x);
	double temp=x;
	double ans=0.0,k=1.0;
	while(fabs(temp)>=0.00001){
		ans+=temp;
		temp*=x;
		temp*=x;
		temp=temp/(double)(2.0*k);
		temp=temp/(double)(2.0*k+1);
		k+=1.0;
	} 
	printf("%.6lf",ans);
	return 0;
}
