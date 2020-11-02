#include <stdio.h>//Written By Coy
int ans[100010]={0},a[100010]={0},b[100010]={0};
int main(){
	a[1]=1;
	b[1]=1;
	int n,k=1;
	scanf("%d",&n);
	for(int j=2;j<=n;j++){//¸ß¾«¶È 
		for(int i=1;i<=k;i++){
			ans[i]=a[i]+b[i];
		}
		for(int i=1;i<=k;i++){
			if(ans[i]>=10){
				ans[i+1]+=ans[i]/10;
				ans[i]%=10;
			}
		}
		if(ans[k+1])k++;
		if(ans[k]>=10){
			ans[k+1]=ans[k]/10;
			ans[k]%=10;
			k++; 
		}
		for(int i=k;i>=1;i--){
			b[i]=a[i];
			a[i]=ans[i];
		}
	}
	for(int i=k;i>=1;i--){
		printf("%d",a[i]);
	}
	return 0;
}
