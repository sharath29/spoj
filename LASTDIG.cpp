#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		vector<int> v;
		cin>>a>>b;
		int temp=a%10;		
		do{
			v.push_back(temp);
			temp = (temp*a)%10;
		}while(temp!=a%10);
		if(v.size()==1)
			cout<<v[0]<<endl;
		else
			cout<<v[(b%(v.size()))-1]<<endl;
		v.clear();
	}
}