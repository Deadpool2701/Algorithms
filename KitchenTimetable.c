#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	ll t,i;
	cin>>t;
	while(t--){
	    ll n,c=0;
	    cin>>n;
	    ll a[n+1],b[n];
	    a[0]=0;
	    for(i=1;i<=n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++)
	        cin>>b[i];
	    for(i=0;i<n;i++)
	   {
	       if((a[i+1]-a[i])>=b[i])
	        c++;
	   }
	 cout<<c<<endl;  
	}    
	return 0;
}
