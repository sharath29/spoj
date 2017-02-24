#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&i,pair<int,int>&j){
	return i.second<j.second;
}
 
int main()
{
	int T,temp,temp1,temp2;
	cin>>T;
	for(int i=0;i<T;i++){
	    vector< pair <int,int> > vect;    
	    int n;
	    cin>>n;
	    for (int i=0; i<n; i++){
	    	cin>>temp1>>temp2;
	        vect.push_back( make_pair(temp1,temp2) );
	    }
	 	
	    sort(vect.begin(), vect.end(),comp);
	 	temp=vect[0].second;
	 	int count=1;
	 	for (int i = 1; i < n; ++i){
	 		if(vect[i].first>=temp)
	 			count++,temp=vect[i].second;
	 	}
	 	cout<<count<<endl;
 	}
    return 0;
}