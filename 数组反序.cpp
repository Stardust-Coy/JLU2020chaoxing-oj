#include <stdio.h>
int n;
void nixu(int s[],int j){
	if(j>n/2)return;
	int temp=s[j];
	s[j]=s[n+1-j];
	s[n+1-j]=temp;
	nixu(s,j+1);
}
int main(){
	scanf("%d",&n);
	int a[10010];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	nixu(a,1);
	for(int i=1;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n]);
	return 0;
}
