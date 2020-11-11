#include <stdio.h>
int main(){
	int n,j,a[100010];
	scanf("%d%d",&n,&j);
	j%=n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=n;i>=1;i--){
		a[i+j]=a[i];
	}
	for(int i=n+1;i<=n+j;i++){
		a[i-n]=a[i];
	}
	for(int i=1;i<n;i++){
		printf("%d ",a[i]);
	} 
	printf("%d",a[n]);
	return 0;
}
