#include <stdio.h>
int strlen(char *str1){
	for(int i=0;;i++){
		if(str1[i]=='\0')return i;
	}
}
char *str_delete(char *s,int v,int w){
	int i=v-1;
	for(;i<=strlen(s)-w-1;i++){
		if(s[i+w]!='\0')s[i]=s[i+w];
			else{
				s[i]='\0';
				break;
			}
	}
	s[i]='\0';
	return s;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	char str[1010];
	gets(str);	
	if(strlen(str)<=n){
		printf("%s","");
		return 0;
	}
	char *ipstr=str_delete(str,m,n);
	printf("%s",str);
	return 0;
}
