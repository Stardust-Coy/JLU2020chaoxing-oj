#include <stdio.h>
int main(){
	double a1,a2,b1,b2;
	scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
	if(b1+b2!=0){
		if(b1+b2>0){
			printf("%.2lf+%.2lfi    ",a1+a2,b1+b2);
		}else printf("%.2lf%.2lfi    ",a1+a2,b1+b2);
	}else printf("%.2lf    ",a1+a2);
	if(b1-b2!=0){
		if(b1-b2>0){
			printf("%.2lf+%.2lfi    ",a1-a2,b1-b2);
		}else printf("%.2lf%.2lfi    ",a1-a2,b1-b2);
	}else printf("%.2lf    ",a1-a2);
	if(b1*a2+a1*b2!=0){
		if(b1*a2+a1*b2>0){
			printf("%.2lf+%.2lfi",a1*a2-b1*b2,b1*a2+a1*b2);
		}else printf("%.2lf%.2lfi",a1*a2-b1*b2,b1*a2+a1*b2);
	}else printf("%.2lf",a1*a2-b1*b2);
	return 0;
}
