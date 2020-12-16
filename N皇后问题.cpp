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
	for(int i=1;i<=n;i++){//第i行 
		if(!nhangyouhuanghou[i]){//第i行还没有皇后 
			flag=1;//表示未发生冲突 
			for(int zhiqian=1;zhiqian<lie;zhiqian++){//遍历之前的皇后 
				if(abs(lie-zhiqian)==abs(i-gailiehuanghouhanghao[zhiqian])){//对角线 第lie列行号为i，第zhiqian列行号为gailiehuanghouhanghao[zhiqian] 
					flag=0;//发生冲突 
					break;
				}
			}
			if(flag){//如果没有冲突 
				gailiehuanghouhanghao[lie]=i;//第lie列行号为i
				nhangyouhuanghou[i]=1;//第i行已经有皇后
				nhuanghou(lie+1);//下一列 
				nhangyouhuanghou[i]=0;//恢复，第i行再次没有皇后了 
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	nhuanghou(1);//从第一列开始 
	printf("%d",ans);
	return 0;
}
