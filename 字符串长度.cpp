#include <stdio.h>
int strlen(char *str){
	for(int i=0;;i++){
		if(str[i]=='\0')return i;
	}
}
int main(){
	char s[1010];
	gets(s);
	printf("%d",strlen(s));
	return 0;
}
