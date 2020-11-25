#include <stdio.h>
#include <string.h>
void count(char *str,int *upper,int *lower,int *space,int *num,int *other){
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ')(*space)++;
			else if((str[i]>='A')&&(str[i]<='Z'))(*upper)++;
			else if((str[i]>='a')&&(str[i]<='z'))(*lower)++;
			else if((str[i]>='0')&&(str[i]<='9'))(*num)++;
			else (*other)++;
	}
}
int main(){
	char s[1010];
	gets(s);
	int a=0,b=0,c=0,d=0,e=0;
	count(s,&a,&b,&c,&d,&e);
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
