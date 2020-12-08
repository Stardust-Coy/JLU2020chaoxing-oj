#include <stdio.h>
int maxx(int s[],int m){
	if(m==1)return s[1];
	int t=maxx(s,m-1);
	if(t>s[m])return t;
		else return s[m];
}
int main(){
	int n;
	scanf("%d",&n);
	int a[10010];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",maxx(a,n));
	return 0;
}
