#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int ans=0,n;
int nhangyouhuanghou[20]={0},gailiehuanghouhanghao[20];
struct quanbujie{
	int booll,xx[20];
}a[100];
void nhuanghou(int lie){
	if(lie==n+1){
		ans++;
		for(int i=1;i<=n;i++){
			a[ans].xx[i]=gailiehuanghouhanghao[i];
		}
		return;
	}
	int flag;
	for(int i=1;i<=n;i++){//��i�� 
		if(!nhangyouhuanghou[i]){//��i�л�û�лʺ� 
			flag=1;//��ʾδ������ͻ 
			for(int zhiqian=1;zhiqian<lie;zhiqian++){//����֮ǰ�Ļʺ� 
				if(abs(lie-zhiqian)==abs(i-gailiehuanghouhanghao[zhiqian])){//�Խ��� ��lie���к�Ϊi����zhiqian���к�Ϊgailiehuanghouhanghao[zhiqian] 
					flag=0;//������ͻ 
					break;
				}
			}
			if(flag){//���û�г�ͻ 
				gailiehuanghouhanghao[lie]=i;//��lie���к�Ϊi
				nhangyouhuanghou[i]=1;//��i���Ѿ��лʺ�
				nhuanghou(lie+1);//��һ�� 
				nhangyouhuanghou[i]=0;//�ָ�����i���ٴ�û�лʺ��� 
			}
		}
	}
}
bool cmp(const struct quanbujie &x,const struct quanbujie &y){
	return x.xx[1]<y.xx[1];
}
int main(){
	n=8;
	nhuanghou(1);//�ӵ�һ�п�ʼ  
	sort(a+1,a+1+n,cmp);
	
	for(int i=1;i<=ans;i++){
		a[i].booll=1;
	}
	for(int i=1;i<ans;i++){
		for(int j=i+1;j<=ans;j++){
			if(a[j].booll){
				for(int k=1;k<=n;k++){
					if(k!=a[j].xx[a[i].xx[k]]){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//���Խ���
				
				for(int k=1;k<=n;k++){
					if(k+a[j].xx[n+1-a[i].xx[k]]!=n+1){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//���Խ���  
				
				for(int k=1;k<=n;k++){
					if(a[i].xx[k]!=a[j].xx[n+1-k]){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//����
				
				
				for(int k=1;k<=n;k++){
					if(a[i].xx[k]+a[j].xx[k]!=n+1){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//���� 
				
				for(int k=1;k<=n;k++){
					if(a[i].xx[k]+a[j].xx[n+1-k]!=n+1){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//��ת180��
					
				for(int k=1;k<=n;k++){
					if(k+a[j].xx[a[i].xx[k]]!=n+1){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//��ʱ����ת90��
					
				for(int k=1;k<=n;k++){
					if(k!=a[j].xx[n+1-a[i].xx[k]]){
						a[j].booll=1;
						break;
					}else a[j].booll=0;
				}
				if(!a[j].booll)break;//��ʱ����ת270��	
			}
		}
	}
	int jishu=0;
	for(int i=1;i<=ans;i++){
		if(a[i].booll){
			if(jishu)printf("\n");
			printf("No%d:",++jishu);
			for(int j=1;j<=n;j++){
				printf("%d ",a[i].xx[j]);
			}
			
		}
	}
	return 0;
}
