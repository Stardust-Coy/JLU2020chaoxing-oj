#include <stdio.h>
float F(float a){
	return (1+1.0/a);
}
int main(){
	float x;
	scanf("%f",&x);
	printf("%.3f",F(F(F(F(F(x))))));
	return 0;
}
