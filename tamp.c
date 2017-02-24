#include <stdio.h>
int main(){
	int i,t,j,n,temp;
	unsigned int a[1000000],min;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%u",&a[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
	min=a[1]-a[0];
	for(i=1;i<n-1;i++)
		if(min>a[i+1]-a[i])
			min=a[i+1]-a[i];
	printf("%d\n",min);
	}
	return 0;
}