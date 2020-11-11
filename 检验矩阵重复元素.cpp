#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[110][110],b[10010]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			if(b[a[i][j]]){
				printf("YES");
				return 0;
			}
			b[a[i][j]]=1;
		}
	}
	printf("NO");
	return 0;
}
