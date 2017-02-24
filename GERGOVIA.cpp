#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,a[100000];
	while(true){
		cin>>n;
		long long int count=0,temp,j;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for (int i = 0; i < n; ++i){
			if(a[i]==0)
				continue;
			if(a[i]<0){
				j=i+1;
				while(a[i]!=0){
					if(a[j]>0){
						temp = abs(a[i])-abs(a[j]);
						if(abs(a[i])<=abs(a[j]))
							count+=(j-i)*abs(a[i]);
						else
							count+=(j-i)*abs(a[j]);
						if(temp>=0){
							a[i]=temp;
							a[j]=0;
						}
						else{
							a[i]=0;
							a[j]=temp;
						}
					}
					j++;
				}
			}
			else{
			j=i+1;
				while(a[i]!=0){
					if(a[j]<0){
						temp = abs(a[i])-abs(a[j]);
						if(abs(a[i])<=abs(a[j]))
							count+=(j-i)*abs(a[i]);
						else
							count+=(j-i)*abs(a[j]);
						if(temp>=0){
							a[i]=temp;
							a[j]=0;
						}
						else{
							a[i]=0;
							a[j]=temp;
						}
					}
					j++;
				}	
			}
		}
	cout<<count<<endl;
		
	}

	return 0;
}