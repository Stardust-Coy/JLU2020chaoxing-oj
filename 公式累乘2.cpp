#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double ans=2.0,t;
	for(int i=1;i<=n;i++){
		ans*=2.0*i*2.0*i/(double)(2*i-1)/(double)(2*i+1);
	}
	printf("%.10lf",ans);
	return 0;
}
