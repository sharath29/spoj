#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void norm_sieve(int a,int limit,vector<int> &prime){
	int set[limit]={0};
	for(int p=2;p*p<limit;p++){
		if(set[p]==0)
			for(int i=p*2;i<limit;i+=p)
				set[i]=1;
	}
	for(int p=2;p<limit;p++)
		if(set[p]==0){
			if(p>=a)
				cout<<p<<endl;
			prime.push_back(p);
	}
}

void segmented_sieve(int a,int b){
	int limit=floor(sqrt(b))+1;
	vector<int> prime;
	norm_sieve(a,limit,prime);
	int low = a;
	int high = low + limit;
	while(low<b){
			int mark[limit]={0};
			for(int i=0;i<prime.size();i++){
				int lolim = floor(low/prime[i])*prime[i];
				if(lolim<low)
					lolim += prime[i];
				for(int j=lolim;j<high;j+=prime[i])
					mark[j-low]=1;
			}
		for(int i=low;i<high;i++)
			if(mark[i-low]==0 && i<=b && i!=1)
				cout<<i<<endl;

		low = low + limit;
		high = high + limit;
	}
}


int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int a,b;
		cin>>a>>b;
		segmented_sieve(a,b);
		cout<<endl;
	}
	return 0;
}