#include <stdio.h>
int main(){
	for(int i=7;;i+=14){
		if((i%3==2)&&(i%5==4)){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
