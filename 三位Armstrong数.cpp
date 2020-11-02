#include <stdio.h>
#include <math.h>
int main(){
	bool b=1;
	for(int i=100;i<=999;i++){
		if(i==pow(i%10,3)+pow(i/10%10,3)+pow(i/100,3)){
			if(b){
				printf("%d",i);
				b=0;
			}else{
				printf(" %d",i);
			}
		}
	}
	return 0;
}
