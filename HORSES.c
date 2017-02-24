#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(unsigned int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 
int main(){
	int T,n,i,k;
	unsigned int ans;
	unsigned int a[1000000];
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%u",&a[i]);
		mergeSort(a,0,n);
		for(i=1;i<n;i++){
		 k=a[i+1]-a[i];
		 if(i==0)
		 ans=k;
		 if(k<ans)
		 ans=k;
		 }
	printf("%u\n",ans);
	}
	return 0;
}