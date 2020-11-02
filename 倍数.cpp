#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	bool b3=0,b5=0,b7=0;
	if(n%3==0)b3=1;
	if(n%5==0)b5=1;
	if(n%7==0)b7=1;
	if(b3&&b5&&b7)printf("3,5,7");
	if(b3&&b5&&!b7)printf("3,5");
	if(b3&&!b5&&b7)printf("3,7");
	if(!b3&&b5&&b7)printf("5,7");
	if(!b3&&!b5&&b7)printf("7");
	if(b3&&!b5&&!b7)printf("3");
	if(!b3&&b5&&!b7)printf("5");
	if(!b3&&!b5&&!b7)printf("NULL");
	return 0;
}
