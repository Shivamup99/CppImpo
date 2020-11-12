#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int cnt=0,max1=0;
    while(t--)
    {
        int n; cin>>n;
        while(n>0)
        {
            int rem=n%2;
            n=n/2;
            if(rem==1)
                cnt++;
            else
                cnt=0;
        if(cnt>max1)
            max1=cnt;
        }
        cout<<max1<<endl;
    }
    return 0;
}
/*{
    int n,r,b=0,i=1,cnt=0,max1=0;
    cin>>n;
     while(n!=0)
    {
        r=n%2;
        n=n/2;
        b=b+r*i;
        i=i*10;
    }
    while(b!=0){
        b/=10;
        if(b==0)
            cnt=0;
        else
           ++cnt;
           if(cnt>max1){
            max1=cnt;
           }
    }
    cout<<max1;

}*/
/*{
    int a[]={1,0,1,1,1,0,0,0,0,0};
    int cnt=0,max1=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            cnt=0;
        else
            cnt++;
      if(cnt>max1){
        max1=cnt;
      }
    }
    cout<<max1<<endl;
}*/
