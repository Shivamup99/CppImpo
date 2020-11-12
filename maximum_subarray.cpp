#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
    int max_sum=a[0];
    int end_sum=a[0];
    for(int i=0;i<n;i++){
        end_sum+=a[i];
       end_sum=max(end_sum,a[i]);
       max_sum=max(max_sum,end_sum);
    }
    return max_sum;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            }
        cout<<sum(a,n)<<endl;
    }
}
