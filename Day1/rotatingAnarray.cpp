class Solution{   
public:
// We made a reverse function here 
    void reverse(int arr[] , int start , int end){
        int start = i;
        int end = j;
        
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            
            start++;
            end--;
        }
    }

// already made function to rotate an array     
    void leftRotate(int arr[], int n, int d) {
        
          int temp[d];
	    for(int i = 0;i<d;i++){
	        temp[i]=arr[i];
	    }
	    for(int i=0;i<n-d;i++){
	        arr[i]=arr[i+d];
	    }
	    int j = 0;
	    for(int i=n-d;i<n;i++)
	    {
	        arr[i] = temp[j++];
	    }
    }

        
        
    
};