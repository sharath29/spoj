#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void norm_sieve(int limit,vector<int> &prime){
	int set[limit]={0};
	for(int p=2;p*p<limit;p++){
		if(set[p]==0)
			for(int i=p*2;i<limit;i+=p)
				set[i]=1;
	}
	for(int p=2;p<limit;p++)
		if(set[p]==0){
			cout<<p<<" ";
			prime.push_back(p);
	}
}

void segmented_sieve(int n){
	int limit=floor(sqrt(n))+1;
	vector<int> prime;
	norm_sieve(limit,prime);
	int low = limit;
	int high = 2*limit;
	while(low<n){
			int mark[limit]={0};
			for(int i=0;i<prime.size();i++){
				int lolim = floor(low/prime[i])*prime[i];
				if(lolim<low)
					lolim += prime[i];
				for(int j=lolim;j<high;j+=prime[i])
					mark[j-low]=1;
			}
		for(int i=0;i<limit;i++)
			if(mark[i]==0)
				cout<<i+low<<" ";

		low = low + limit;
		high = high + limit;
	}
}


int main(){
	int n;
	cin>>n;
	segmented_sieve(n);
	return 0;
}