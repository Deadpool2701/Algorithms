#include <iostream>
using namespace std;


int main() {
	// your code goes here
	
	int S, N;
	
	cin >> S;
	
	for(int i = 0;i < S;i++){
	    
	    cin >> N;
	    
	    int H[N];
	    for(int i = 0;i < N;i++)
	        cin >> H[i];
	        
	    if((N&1) == 0){
	        cout << "no" << endl;
	    }
	    else{
	        bool v = true;
	        if(H[0] != 1 || H[N-1] != 1){
	            v = false;
	        }
	        
	        if(v){
    	        for(int i = 0;i < N/2;i++){
    	            if(H[i]+1 != H[i+1]){
    	                v = false;
    	                break;
    	            }
    	        }
    	        
	        }
	        
	        if(v){
    	        for(int i = (N/2)+1;i < N-1;i++){
    	            if(H[i] != H[i+1]+1){
    	                v = false;
    	                break;
    	            }
    	        }
	        }
	        
	        if(v){
	            cout << "yes" << endl;
	        }
	        else{
	            cout << "no" << endl;
	        }
	        
	    }
	    
	}
	
	return 0;
}
