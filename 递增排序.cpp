#include <stdio.h>
int main(){
	float a[15],temp;
	scanf("%f%f%f",&a[1],&a[2],&a[3]);
	for(int i=1;i<=2;i++){
		for(int j=i+1;j<=3;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%.1f %.1f %.1f",a[1],a[2],a[3]);
	return 0;
}
