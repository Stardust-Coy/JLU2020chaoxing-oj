#include <stdio.h>
#include <string.h> 
int main(){
	char ch[1010];
	gets(ch);
	char temp;
	for(int i=0,j=strlen(ch)-1;i<j;i++,j--){
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
	} 
	for(int i=0;i<strlen(ch);i++){
		printf("%c",ch[i]);
	}
	return 0;
}
