#include <stdio.h>
#include <math.h>
int main(){
	float x0,y0,z0,A,B,C,D;
	scanf("%f%f%f",&x0,&y0,&z0);
	scanf("%f%f%f%f",&A,&B,&C,&D);
	float d=fabs(A*x0+B*y0+C*z0+D)/sqrt(A*A+B*B+C*C);
	printf("%.3f",d);
	return 0;
}
