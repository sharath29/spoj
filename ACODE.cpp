#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5000]={0},temp,i;
	a[0]=1;
	string num;
	cin>>num;
	for(i=1;num.size();i++){
		if(num[i-1]<10 && num[i-1]>0)
			a[i]=a[i-1];
		if(i>1){
			temp = int(num[i-2])*10+int(num[i-1]);
			if(temp<27)
				a[i]+=a[i-2];
		}
	}
	for(int i=0;i<num.size();i++){
		cout<<a[i];
	}
}