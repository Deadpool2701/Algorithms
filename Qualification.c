//
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	
	ll t;
	cin>>t;
	while(t--){
	    ll n,k,c=0;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	   sort(a, a + n, greater<>());
	    ll score=a[k-1];
	    for(ll i=0;i<n;i++){
	        if(a[i]>=score){
	            c++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
