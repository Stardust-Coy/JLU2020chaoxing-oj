#include <stdio.h>
#include <math.h>
double juli(double a1,double b1,double a2,double b2){
	return sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
}//������������ 
int main(){
	int n;
	double x0,y0,x1,y1,x2,y2;
	scanf("%d",&n);
	if(n==1){
		scanf("%lf%lf",&x1,&y1);
		printf("0.00");
		return 0; 
	}//һ�����ܳ�Ϊ0 
	scanf("%lf%lf",&x0,&y0);
	x1=x0;
	y1=y0;//x0��y0��¼��ʼ��λ�� x1��y1Ϊ��һ����λ�� 
	double ans=0; 
	for(int i=1;i<=n-1;i++){
		scanf("%lf%lf",&x2,&y2);//x2,y2Ϊ��ǰ��λ�� 
		ans+=juli(x1,y1,x2,y2);
		x1=x2;
		y1=y2;
	}
	if(n>=3)ans+=juli(x1,y1,x0,y0);//��������߼����ϵ�ͼ�� ����γɱպ� 
	printf("%.2lf",ans);
	return 0;
}
