#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[110][110];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int temp,minn,ki=1,kj=0,mi=1,mj=1;
	for(int k=1;k<=m*n;k++){
		kj++;
		if(kj>m){
			kj=1;
			ki++;
		}
		minn=a[ki][kj];
		mi=ki;
		mj=kj;
		for(int i=kj+1;i<=m;i++){
			if(a[ki][i]<minn){
				minn=a[ki][i];
				mi=ki;
				mj=i;
			}
		}
		for(int i=ki+1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]<minn){
					minn=a[i][j];
					mi=i;
					mj=j;
				}
			}
		}
		temp=a[ki][kj];
		a[ki][kj]=a[mi][mj];
		a[mi][mj]=temp;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=m-1;j++){
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][m]);
	}
	for(int j=1;j<=m-1;j++){
		printf("%d ",a[n][j]);
	}
	printf("%d",a[n][m]);
	return 0;
}
