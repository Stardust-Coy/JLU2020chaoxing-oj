#include <stdio.h>
int main(){
	int top=0;
	char stack[100010];
	char ch;
	scanf("%c",&ch);
	while(ch!='@'){
		if(ch=='{')stack[++top]=ch;
		if(ch=='[')stack[++top]=ch;
		if(ch=='(')stack[++top]=ch;
		if(ch==')'){
			if(stack[top]!='('){
				printf("NO");
				return 0;
			}else{
				top--;
			}
		}
		if(ch==']'){
			if(stack[top]!='['){
				printf("NO");
				return 0;
			}else{
				top--;
			}
		}
		if(ch=='}'){
			if(stack[top]!='{'){
				printf("NO");
				return 0;
			}else{
				top--;
			}
		}
		scanf("%c",&ch);
	}
	if(top==0)printf("YES");
		else printf("NO");
	return 0;
}
