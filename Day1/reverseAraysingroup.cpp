class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
     long int val = k,q,r,limit , lim;
     q = n/k;
     r = n%k;
     limit = q*k;
     
     for(int i = 0; i<limit ; i++){
         if(i%val==0 && i!=0){
             k = k + (2*val);
         }
        if(k%2==0){
            lim = (k/2)-1;
        }
        else{
            lim = (k/2);
        }
        for(int j=i; j<=lim ; j++){
            swap(arr[j] , arr[k-j-1]);
        }
    }  
    
   //now for the remaing group 
   
   if(r!=0){
       lim = limit + ((N-1-limit)/2);
       int j = n-1;
       for(int i =limit;i<=lim;i++){
           swap(arr[j] , arr[j--]);
       }
   }
 
};