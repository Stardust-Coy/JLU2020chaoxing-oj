#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int huazuo=0,huayou=0,fangzuo=0,fangyou=0,yuanzuo=0,yuanyou=0;
	char ch=getchar();
	while(ch!='@'){
		if(ch=='{')huazuo++;
		if(ch=='}')huayou++;
		if(ch=='[')fangzuo++;
		if(ch==']')fangyou++;
		if(ch=='(')yuanzuo++;
		if(ch==')')yuanyou++;
		ch=getchar();
	}
	bool shuchuguo=0;
	if(huazuo!=huayou){
		cout<<"{}";
		shuchuguo=1;
	}
	if(fangzuo!=fangyou){
		cout<<"[]";
		shuchuguo=1;
	}
	if(yuanzuo!=yuanyou){
		cout<<"()";
		shuchuguo=1;
	}
	if(!shuchuguo){
		cout<<"NULL";
	}
	return 0;
}
