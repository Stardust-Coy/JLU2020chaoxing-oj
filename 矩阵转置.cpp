#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[110][110],temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][n]);
	}
	for(int j=1;j<n;j++){
		printf("%d ",a[n][j]);
	}
	printf("%d",a[n][n]);
	return 0;
}
