#include<bits/stdc++.h>
using namespace std;
int equali(int a[],int n)
{
    int sum1,sum2;
    for(int i=0;i<n;i++)
    {
        sum1=0;
        for(int j=0;j<i;j++)
            sum1=sum1+a[j];
        sum2=0;
        for(int j=i+1;j<n;j++)
            sum2=sum2+a[j];
        if(sum1==sum2)
            return i;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<equali(a,n);
    }
}
