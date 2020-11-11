#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x,k=0,sum[100010]={0},j=0;
	int a[100010];//a记录元素
	scanf("%d",&x);
	if(x==-1)return 0;
	a[++k]=x;
	while(x!=-1){
		while(x!=0){
			scanf("%d",&x);
			a[++k]=x;
		}
		++j;
		for(int i=1;i<=k;i++){
			for(int l=1;l<=k;l++){
				if((l!=i)&&(a[i]==n*a[l]))
				sum[j]++;
			}	
		}
		k=0;
		scanf("%d",&x);
		a[++k]=x;
	}
	for(int i=1;i<j;i++){
		printf("%d\n",sum[i]);
	}
	printf("%d",sum[j]);//去掉末行换行回车 
	return 0;
}
