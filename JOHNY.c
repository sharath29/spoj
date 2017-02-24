#include <stdio.h>
int main(){
	int i,j,temp,n,t,k,ans;
	unsigned int a[100000],key;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%u",&a[i]);
		scanf("%d",&k);
		key=a[k-1];
		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		for(i=0;i<n;i++)
			if(a[i]==key){
				ans=i+1;
				break;
			}
	printf("%d\n",ans);
	}
return 0;
}