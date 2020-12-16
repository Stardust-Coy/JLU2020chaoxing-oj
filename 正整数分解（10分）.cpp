#include <stdio.h>
int n,a[10010],sum=0,top=-1;
void f(int n,int g){
	if(sum==n){
		printf("%d=",n);
		for(int i=0;i<top;i++){
			printf("%d+",a[i]);
		}
		printf("%d\n",a[top]);
		return;
	}
	if(sum>n)return;
	for(int i=g;i>0;i--){
		a[++top]=i;
		sum+=i;
		f(n,i);
		sum-=i;
		top--; 
	}
}
int main(){
	scanf("%d",&n);
	if(n==1){
		printf("1=1\n");
		return 0;
	}
	f(n,n-1);
	return 0;
}
