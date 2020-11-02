#include <stdio.h>
int main(){
	float x;
	scanf("%f",&x);
	float ans=1,dangqian=1;
	for(int i=1;i<=99;i++){
		dangqian=dangqian/(i*1.0)*x;
		ans+=dangqian;
	}
	printf("%.2f",ans);
	return 0;
}
