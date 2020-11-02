#include <stdio.h>
int main(){
	int data;
	scanf("%d",&data);
	printf("0");
	for(int i=11;i<data;i+=11){
		printf(" %d",i);
	}
	return 0;
}
