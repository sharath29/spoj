#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	while(n!=0){
		for(int i=1;i<=n;i++)
			sum+=i*i;
		cout<<sum<<endl;
		sum=0;
		cin>>n;
	}
	return 0;
}