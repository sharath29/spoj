#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int temp = 0;
	while(temp!=42){
		cin>>temp;
		if(temp!=42)
			cout<<temp<<endl;
	}
	return 0;
}