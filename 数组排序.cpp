#include <stdio.h>
int main(){
	int a[1010]={0},b[1010]={0},c[1010]={0};
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
		c[i]=a[i];
	}
	//选择排序
	int kmin=1,minn=a[1],temp,bijiao=0,jiaohuan=0;
	for(int i=1;i<=9;i++){
		for(int j=i+1;j<=10;j++){
			bijiao++;
			if(a[j]<minn){
				kmin=j;
				minn=a[j];
			}
		}
		temp=a[i];
		a[i]=a[kmin];
		a[kmin]=temp;
		jiaohuan++;
	} 
	printf("%d %d ",bijiao,jiaohuan);
	//冒泡排序
	bijiao=0;
	jiaohuan=0;
	int flag=1;
	while(flag){
		flag=0;
		for(int j=1;j<=9;j++){
			bijiao++;
			if(b[j]>b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp; 
				jiaohuan++;
				flag=1;
			}
		}
	}
	printf("%d %d ",bijiao,jiaohuan);
	//逐步增加递增子序列 插入排序
	bijiao=0;
	jiaohuan=0;
	for(int i=1;i<=10;i++){
		int j=i-1;
		while((c[j]>c[i])&&(j>=0)){
			j--;
			bijiao++;
		}
		bijiao++;
		temp=c[i];
		for(int k=i-1;k>j;k--){
			c[k+1]=c[k];
			jiaohuan++;
		}
		c[j+1]=temp;
		if(j+1!=i)jiaohuan++;
	}
	printf("%d %d",bijiao-1,jiaohuan); 
	return 0;
}
