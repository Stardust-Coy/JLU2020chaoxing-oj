#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int h=a/3600%24,m=a%3600/60%60,s=a%3600%60%60;
	if(h<10)printf("0");
	printf("%d:",h);
	if(m<10)printf("0");
	printf("%d:",m);
	if(s<10)printf("0");
	printf("%d",s);
	return 0;
}
