#include <stdio.h>
#include <string.h>
struct Xingming{
	char name[1010];
}a[110];
void swap(char *p1,char *p2){
	char temp;
	while(*p1!='\0'||*p2!='\0'){
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		gets(a[i].name);
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(strcmp(a[i].name,a[j].name)>0){
				swap(a[i].name,a[j].name);
			}
		}
	}
	for(int i=1;i<n;i++){
		puts(a[i].name);
	}
	printf("%s",a[n].name);
	return 0;
}
