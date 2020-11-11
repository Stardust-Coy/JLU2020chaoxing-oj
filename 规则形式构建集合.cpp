#include <stdio.h>
int main(){
	int a[200010],b[200010]={0};	
	a[1]=1;
	int duishou=1,duiwei=1;
	while(a[duiwei]<100000){
		a[++duiwei]=a[duishou]*2+1;
		a[++duiwei]=a[duishou++]*3+1;
	}
	for(int i=1;i<=duiwei;i++){
		b[a[i]]=1;
	}
	int n;
	scanf("%d",&n);
	int flag=1;
	for(int i=1;i<=200000;i++){
		if(b[i]){
			if(n>0){
				if(flag){
					printf("%d",i);
					flag=0;
				}else printf(" %d",i);
				n--;
			}else break;
		}
	}
	return 0;
}
