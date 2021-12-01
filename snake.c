#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,j,p;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	    int f=0;
	    p=0;
	    cin>>n;
	    char a[n];
	    for(j=0;j<n;j++)
	        cin>>a[j];
	    for(j=0;j<n;j++)
	    {
	        if(a[j]=='H')
	        {
	            if(f==1)
	            {
	                p=1;
	                break;
	            }
	            else
	                f=1;
	        }
	        else if(a[j]=='T')
	        {
	            if(f==0)
	            {
	                p=1;
	                break;
	            }
	            else
	                f=0;
	        }
	        if(j==(n-1))
	        {   
	            if(f!=0)
	                p=1;
	        }
	                
	    }
	    if(p==1)
	        cout<<"Invalid"<<endl;
	    else
	        cout<<"Valid"<<endl;
	}
	return 0;
}
