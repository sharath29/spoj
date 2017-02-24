#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int men[1000],women[1000];
	int temp,len;
	cin>>n;
	for(int i=0;i<n;i++){
		int sum=0;
		cin>>len;
		for(int j=0;j<len;j++){
			cin>>temp;
			men[j]=temp;
		}
		for(int j=0;j<len;j++){
			cin>>temp;
			women[j]=temp;
		}
		sort(men,men+len);
		sort(women,women+len);
		for(int j=0;j<len;j++){
			sum+=men[j]*women[j];
		}
	cout<<sum<<endl;
	}
}