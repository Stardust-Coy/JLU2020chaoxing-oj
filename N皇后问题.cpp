#include <stdio.h>
#include <math.h>
int ans=0,n;
int nhangyouhuanghou[20]={0},gailiehuanghouhanghao[20];
void nhuanghou(int lie){
	if(lie==n+1){
		ans++;
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
int main(){
	scanf("%d",&n);
	nhuanghou(1);//�ӵ�һ�п�ʼ 
	printf("%d",ans);
	return 0;
}
