#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int x,y;
		cin>>x>>y;
		string str1 = to_string(x);
		string str2 = to_string(y);
		reverse(str1.begin(),str1.end());
		reverse(str2.begin(),str2.end());		
		int result = stoi(str1)+stoi(str2);
		string str = to_string(result);
		reverse(str.begin(),str.end());
		cout<<stoi(str)<<endl;
	}
return 0;
}