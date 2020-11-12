#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n;
	    int flag=0;
	    cin>>n;
	    if(n>1){
	    for(int j=2;j<=sqrt(n)+1;j++)
	    {
	        if(n%j==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    }
	    if(flag==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;

	}
	return 0;
}
