#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[10010];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int temp;//ÀàËÆÖ÷ÔªÅÅÐò 
	for(int i=1;i<=n-1;i++){
		if(a[i]==0){
			for(int j=i+1;j<=n;j++){
				if(a[j]!=0){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					break;
				} 
			}
		}	
	}
	for(int i=1;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n]); 
	return 0;
}
