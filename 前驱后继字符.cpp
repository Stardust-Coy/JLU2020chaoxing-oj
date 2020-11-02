#include <stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	printf("%c%c%c",(char)(c-1),c,(char)(c+1));
	return 0;
}
