#include <stdio.h>
int main(){
	//模拟集合容器 
	int n;
	scanf("%d",&n);
	int x,k=0,a[10010];
	int b;//b=1代表有重复 
	for(int i=1;i<=n;i++){
		b=0;
		scanf("%d",&x);
		for(int j=1;j<=k;j++){
			if(a[j]==x){
				b=1;
				break;
			}
		}
		if(!b)a[++k]=x;
	}
	for(int i=1;i<k;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[k]);
	return 0;
}
