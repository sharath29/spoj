#include <stdio.h>
#include <string.h>
void main(){
	char a[20];
	int t,min,i,len,mid,temp;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		len=strlen(a);
		if(len%2==0){
			for(i=mid;i<len;i++){
				if(a[len-i-1]<a[i]){
					temp=(int)a[len-i-1]++;
					a[len-i-1]=(char)temp;
					a[i]=a[len-i-1];
				}
				else
					while(a[i]<a[len-i-1]){
						temp=(int)a[i]++;
						a[i]=(char)temp;
					}
			}
		}
		else{
			for(i=min+1;i<len;i++){
				if(a[len-i-1]<a[i]){
					temp=(int)a[len-i-1]++;
					a[len-i-1]=(char)(temp);
					a[i]=a[len-i-1];
				}
				else
					while(a[i]<a[len-i-1]){
						temp=(int)a[i]++;
						a[i]=(char)temp;
				    }
			}
		}

	}
}