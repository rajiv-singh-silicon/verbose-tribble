#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int* Rdm(int n)
{
    srand(time(0));
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = rand()%100;
    }
    return arr;
}

int main()
{
    int n, i;
    cout<<"Enter Array Size:";
    cin>>n;
    cout<<"The Elements Are::";
    int *res=new int[n];
    res=Rdm(n);
    for(i=0;i<n;i++)
        cout<<res[i]<<" ";
    return 0;
}
