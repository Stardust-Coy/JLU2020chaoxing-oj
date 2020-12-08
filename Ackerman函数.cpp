#include <stdio.h>
int Ack(int x,int y){
	if(x==0)return y+1;
	if(y==0)return Ack(x-1,1);
	if(x>0&&y>0)return Ack(x-1,Ack(x,y-1));
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",Ack(m,n));
	return 0;
}
