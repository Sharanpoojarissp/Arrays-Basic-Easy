class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) {
	  

        int start = l-1;
	    int end = r-1;
	    while(start<end){
	        swap(arr[start],arr[end]);
	        start++;
	        end--;
	    
	    }
   }

};