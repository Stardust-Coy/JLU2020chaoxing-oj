#include <stdio.h>
int a[10010]={0},k=0;
void nixu(long long x){
	while(x){
		a[++k]=x%10;
		x/=10;
	}
	int b=1;//Ïû³ýÇ°ÖÃ0 
	for(int i=1;i<=k;i++){
		if(b){
			if(a[i]!=0){
				printf("%d",a[i]);
				b=0;
			}
		}else printf("%d",a[i]);
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(n==0){
		printf("0");
		return 0;
	}
	if(n<0){
		printf("NULL");
		return 0;
	}
	nixu(n);
	return 0;
}
