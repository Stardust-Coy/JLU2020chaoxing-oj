#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=(n-i)*2;j++)printf(" ");
		for(int j=1;j<=i;j++)printf("%2d",j);
		for(int j=i-1;j>=1;j--)printf("%2d",j);
		printf("\n");
	}
	for(int j=1;j<=n;j++)if(j!=10)printf("%2d",j);else printf(" 0");
	for(int j=n-1;j>=1;j--)printf("%2d",j);
	return 0;
}
