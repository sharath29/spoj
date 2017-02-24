#include <stdio.h>
long int Qsort(long int data[],long int left,long int right)
{
long int mid,tmp,i,j;
i = left;
j = right;
mid = data[(left+right)/2];
do
{
while (data[i] < mid)
i++;
while (mid < data[j])
j--;
if (i <= j)
{
tmp = data[i];
data[i] = data[j];
data[j] = tmp;
i++;
j--;
}
}
while (i <= j);
{
if (left < j)
Qsort(data,left,j);
if (i < right)
Qsort(data,i,right);
}
}
int main()
{
long int t,n,i,ans,k;
scanf("%ld",&t);
for(;t>0;t--)
{
 scanf("%ld",&n);
 long int a[n];
 for(i=0;i<n;i++)
 scanf("%ld",&a[i]);
 Qsort(a,0,n-1);
 for(i=0;i<n-1;i++)
 {
 k=a[i+1]-a[i];
 if(i==0)
 ans=k;
 if(k<ans)
 ans=k;
 }
 printf("%ld\n",ans);
}
return 0;
}