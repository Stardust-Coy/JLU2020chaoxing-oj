#include <stdio.h>
struct Xinxi{
	char name[25];
	int sex;
	int age;
}a[15];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d%d",a[i].name,&a[i].sex,&a[i].age);
	}
	printf("%s ",a[n/2].name);
	if(a[n/2].sex==0)printf("Female %d ",a[n/2].age);
		else printf("Male %d ",a[n/2].age);
	return 0;
}
