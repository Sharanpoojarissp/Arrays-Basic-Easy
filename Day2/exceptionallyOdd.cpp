class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int XOR = 0;
        
        for(int i=0 ; i<n ; i++){
            XOR = XOR ^ arr[i];          //sabka xor hogaya 
        }
        
        return XOR;
    }
};