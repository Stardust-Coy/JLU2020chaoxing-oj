#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[110][110];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i][j]!=a[j][i]){
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
