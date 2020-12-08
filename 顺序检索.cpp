#include <stdio.h>
#include <stdlib.h>
int n,key;
void findd(int s[],int j){
	if(j>=n)return; 
	if(s[j]==key){
		printf("%d",j);
		exit(0);
	}else findd(s,j+1); 
}
int main(){
	scanf("%d",&n);
	int a[10010];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	findd(a,0);
	printf("NULL");
	return 0;
}
