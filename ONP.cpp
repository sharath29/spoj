#include <bits/stdc++.h>
using namespace std;

char proirity(char a,char b){
	char arr[]={'+','-','*','/','^'};
	int temp1,temp2;
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]==a)
			temp1=i;
		if(arr[i]==b)
			temp2=i;
	}
	if(temp1<temp2)
		return b;
	else
		return a;
}

int main(){
	
	int n;
	cin>>n;
	string str;
	
	while(n--){
		cin>>str;
		stack<char> stk;
		for (int i = 0; i < str.size(); i++){
			if (isalpha(str[i]))
				cout<<str[i];
			else if(str[i]=='(')
				stk.push('(');
			else if(str[i]==')'){
				while(stk.top()!='('){
					cout<<stk.top();
					stk.pop();
				}
				stk.pop();
			}
			else if(stk.top()==proirity(stk.top(),str[i]))
				stk.push(str[i]);
			else{
				while(!stk.empty() || stk.top()!=')'){
					cout<<stk.top();
					stk.pop();
				}
			}
		}
		while(!stk.empty()){
			cout<<stk.top();
			stk.pop();
		
		}
		cout<<endl;
	
	}
	return 0;
}