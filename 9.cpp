#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the Array::\n";
cin>>n;
int *arr=new int[n+1];
for(int i=0;i<n;i++)
cin>>arr[i];

int t;
cout<<"Enter the element to be inserted\n";
cin>>t;
int pos=0;
for(int i=0;i<n;i++)
{
    if(arr[i]<=t)
    {
        pos=i+1;
    }
    else
    {
        break;
    }

}

for(int i=n;i>pos;i--)
{
    arr[i]=arr[i-1];
}
arr[pos]=t;

cout<<"The updated array=\n";
for(int i=0;i<n+1;i++)
    cout<<arr[i]<<" ";


return 0;
}
