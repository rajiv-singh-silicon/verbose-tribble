#include<iostream>
using namespace std;

int  pivot(int *arr,int l,int h)
{
int p=arr[h];

int i=l-1;
for(int j=l;j<h;j++)
{
if(arr[j]<=p)
{
i++;
int t;
t=arr[j];
arr[j]=arr[i];
arr[i]=t;
}
}
int t=arr[i+1];
arr[i+1]=arr[h];
arr[h]=t;

return i+1;

}


void sort(int *arr,int l,int h)
{
if(l<h)
{

int p=pivot(arr,l,h);

sort(arr,l,p-1);
sort(arr,p+1,h);
}
}



int main()
{
int n;
cout<<"Enter the size of array\n";
cin>>n;
int *arr=new int[n];
cout<<"Enter the elements\n";
for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,0,n-1);
cout<<"The sorted array=\n";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

delete[] arr;
return 0;
}
