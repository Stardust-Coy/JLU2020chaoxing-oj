#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void inline swap(int *s1,int *s2){
	int t=*s1;
	*s1=*s2;
	*s2=t;
}
/*反转函数,s,e分别执行开始和结尾 */
void reverse(int *s,int* e){
	for(e--;s<e;s++,e--)swap(s,e);
}

bool next_permutation(int *start,int *end){
	int *cur = end-1, *pre=cur-1;
	while(cur>start && *pre>=*cur)cur--,pre--;
	if(cur<=start)return false;
	    
	for(cur=end-1;*cur<=*pre;cur--);//找到逆序中大于*pre的元素的最小元素 
	swap(cur,pre);
	reverse(pre+1,end);//将尾部的逆序变成正序 
	return true;
}
int n,ans[1048577],zonggeshu,b[1048577]={0};
int hefa(){
	int shu,count=0;
	for(int i=0;i<=1048577;i++){
		b[i]=0;
	}
	int k;
	for(int i=1;i<=zonggeshu;i++){
		shu=0;
		for(int j=i;j<=i+n-1;j++){
			k=j;
			if(k>zonggeshu)k%=zonggeshu;
			shu=shu*2+ans[k];
		}
		if(!b[shu])b[shu]=1;
			else return 0;
	}
	return 1;
} 
int main(){
	scanf("%d",&n);
	zonggeshu=pow(2,n);
	for(int i=1;i<=zonggeshu/2;i++){
		ans[i]=0;
	}
	for(int i=zonggeshu/2+1;i<=zonggeshu;i++){
		ans[i]=1;
	}
	if(hefa()){
		for(int k=1;k<zonggeshu;k++){
			printf("%d ",ans[k]);
		}
		printf("%d\n",ans[zonggeshu]);
		exit(0);
	}
	do{
    	if(hefa()){
			for(int k=1;k<zonggeshu;k++){
				printf("%d ",ans[k]);
			}
			printf("%d\n",ans[zonggeshu]);
			exit(0);
		}
	}while(next_permutation(ans+1,ans+1+zonggeshu));
	return 0;
}
