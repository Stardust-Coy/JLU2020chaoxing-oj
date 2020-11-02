#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int sex,age;
	cin>>sex>>age;
	if(sex==1){
		if(age<=65){
			cout<<"NULL";
			return 0;
		}
		if(age<=70){
			cout<<50;
			return 0;
		}
		if(age>70){
			cout<<50+20;
			return 0;
		}
	}
	if(sex==2){
		if(age<=60){
			cout<<"NULL";
			return 0;
		}
		if(age<=65){
			cout<<45;
			return 0;
		}
		if(age>65){
			cout<<45+25;
			return 0;
		}
	}
	return 0;
}
