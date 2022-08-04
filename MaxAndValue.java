class Solution{
    
   // Function for finding maximum AND value.
    public static int maxAND (int arr[], int N) {
        
        // Your code here
        // You can add extra function (if required)
       int bit = 0; 
       int count = 0; 
       for (int i=30;i>=0;i--) 
       { 
           bit = bit|1<<i; 
           for (int j=0;j<N;j++)
           { 
               if ((bit&arr[j]) == bit) 
                count++; 
           }
           if (count < 2) 
                bit = bit&(bit-1); 
           count=0; 
       }
       return bit;
        
        
    }
    
}
