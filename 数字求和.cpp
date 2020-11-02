#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int a;
	cin>>a;
	int x,sum=0;
	for(int i=1;i<=5;i++){
		cin>>x;
		if(x%a==0)sum+=x;
	}
	cout<<sum<<endl;
	return 0;
}
