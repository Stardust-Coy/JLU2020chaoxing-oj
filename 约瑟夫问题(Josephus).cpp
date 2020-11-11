#include <stdio.h>
int main(){
	int n,s,m;
	scanf("%d%d%d",&n,&s,&m);
	int k=s,count=0,death=0;
	int b[1010]={0};//0表示没死
	//int shuchuguo=0;
	int flag=1;//格式控制 
	do{
		if(k>n)k=1;
		if(!b[k]){
			count++;
			if(count==m){
				count=0;
				death++;
				b[k]=1;
				/*if(!shuchuguo){
					printf("%d",k);
					shuchuguo=1;
				}else printf(" %d",k);*/
				if(flag){
					printf("%d",k);
					flag=0;
				}else printf(" %d",k);
			} 
		}
		k++;
	}while(death<n); 
	return 0;
}
