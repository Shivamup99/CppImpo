#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n;
     int a[n];
     for (int i=0;i<n;i++){
         cin>>a[i];
     }
     int max=a[0],min=a[0];
     for (int i=0;i<n;i++){
         if(a[i]>max)
            max=a[i];
         if(a[i]<min)
            min=a[i];
     }
     int s=max-min+1;
     int h[s]={0};
     for (int i=0;i<n;i++){
         a[i]-=min;
     }

     for (int i=0;i<n;i++){
         h[a[i]]++;
     }
     cin>>k;
     for(int i=0;i<s;i++){
         if(h[i]>=1){
             k--;
         }
         if(k==0){
             cout<<i+min<<endl;
             break;
         }
     }
    }
    return 0;
}
