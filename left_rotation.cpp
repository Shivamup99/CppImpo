#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int d; cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        cout<<a[(i+d)%n]<<endl;
}
