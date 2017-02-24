#include <stdio.h>

int rev(int a){
	int temp=0;
	while(a){
        temp=(temp*10)+(a%10);                 
        a/=10;
    }
   	return temp;
}



int main(){
	int i,n,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		printf("%d\n",rev(rev(a)+rev(b)));
	}
	return 0;
}