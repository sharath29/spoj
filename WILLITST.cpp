#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,i,temp;
	int a[10]={-1,-1,1,0,1,1,0,0,1,0};
	for(i=10;i<15;i++){
		k=i;
		while(1){
			if(k%2==0)
				k=k/2;
			else
				k=(k+1)*3;
			
			if(k<i){
				a[i]=a[k];
				break;
			}
		}
	}
	for(i=0;i<15;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}