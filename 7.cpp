#include<iostream>
using namespace std;

int insertion_sort(char *c,int n,int *shifts)
{
 *shifts=0;
for(int i=1;i<n;i++)
{
if(c[i]<c[i-1])
{
int t=c[i];
int j=i;
while(t<c[j-1]&&(j-1)>=0)
{
c[j]=c[j-1];
(*shifts)++;
j--;
}
c[j]=t;

}

}


return 0;
}

int main()
{

int n;
cout<<"Enter the size of character array\n";
cin>>n;
cout<<"Enter the character array\n";
char *c=new char[n+1];
for(int i=0;i<n;i++)
cin>>c[i];
int shifts=0;
insertion_sort(c,n,&shifts);
cout<<"The sorted array=\n";
for(int i=0;i<n;i++)
cout<<c[i]<<" ";
cout<<"\nThe no of shifts= "<<shifts;
delete[] c;
return 0;
}
