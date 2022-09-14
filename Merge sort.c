#include<stdio.h>
int Merge(int a[],int lb,int mid,int ub)
{
int b[10];
int i=lb;
int j=mid+1;
int k=lb;
while(i<=mid && j<=ub)
{
if(a[i]<=a[j])
{
b[k]=a[i];
i++;
}
else
{
b[k]=a[j];
j++;
}
k++;
}
if(i>mid)
{
while(j<=ub)
{
b[k]=a[j];
j++;
k++;
}
}
else
{
while(i<=mid)
{
b[k]=a[i];
i++;
k++;
}
}
for(k=lb;k<=ub;k++)
{
a[k]=b[k];
}
//return b[10];
}
int Merge_sort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
Merge_sort(a,lb,mid);
Merge_sort(a,mid+1,ub);
Merge(a,lb,mid,ub);
}
}
void main()
{
int a[10],n,i;
printf("\nEnter the number of elements in the array...:");
scanf("%d",&n);
printf("\nEnter the array Elements..:");
for(i=0;i<n;i++)
{
printf("\nEnter a[%d] element...:",i);
scanf("%d",&a[i]);
}
Merge_sort(a,0,n-1);
printf("\nThe sorted array elements using insertion sort..:");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
