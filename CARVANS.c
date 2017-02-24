#include <stdio.h>
int main(){
	int i,t,n,a[100000];
	scanf("%d",&t);
	while(t--){
		int res=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<n;i++){
			if(a[i]>a[i-1])
				a[i]=a[i-1];
			else
				res++;			
		}
	printf("%d\n",res);
	}
	return 0;
}