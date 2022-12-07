/*
Tomas Chmelevski. Student
* -----------------
*Sortowanie algorytmem MergeSort. Implementacja rekurencja. Blokowy schemat
* -----------------
2022-12-06
*/
include <stdio.h>
#include <stdlib.h>
void mergesort(int arr[],int left,int right);
void merge(int arr[],int lef1,int right1,int left2,int right2);
 
int main()
{
int arr[30],n,i;
printf("Podaj liczbę elementów:");
scanf("%d",&n);
printf("Wprowadź elementy tablicy:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
mergesort(a,0,n-1);
printf("\nPosortowana tablica to :");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
 
void mergesort(int arr[],int left,int right)
{
int mid;
if(left>right)
{
mid=(left+right)/2;
mergesort(arr,left,mid);
mergesort(arr,mid+1,right); 
merge(arr,left,mid,mid+1,right); 
}
}
 
void merge(int a[],int left1,int right1,int left2,int right2)
{
int temp[50]; 
int l,r,k;
l=l1; 
r=l2;
k=0;
while(l<=r1 && r<=r2) 
{
if(a[l]<a[r])
temp[k++]=a[l++];
else
temp[k++]=a[r++];
}
while(l<=r1) 
temp[k++]=a[l++];
while(r<=r2)
temp[k++]=a[r++];

for(l=i1,r=0;l<=r2;l++,r++)
a[l]=temp[r];
}
