#include <bits/stdc++.h>
using namespace std;
int a[]={0,1,2,3,4,5,6,7,8,9,10,11,13,13,14,15};

long int calc(long int n){
	if(n<=15)
		return a[n];
	else
		return max(n,calc(n/2)+calc(n/3)+calc(n/4));
}


int main(){
	int T;
	cin>>T;
	while(T--){
		long int n;
		cin>>n;
		cout<<calc(n)<<endl;
	}
	return 0;
}