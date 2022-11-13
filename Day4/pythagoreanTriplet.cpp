class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    
 	    sort(arr , arr+n);
 	    for(int i = 0 ; i<n ; i++){
	        for(int j =i+1; j<n;j++){
 	        for(int k = n ; k>=0 ; k--){
	            
	        if(((arr[i])*(arr[i])+(arr[i+1])*(arr[i+1])) == ((arr[k])*(arr[k]))){
 	        return 1;
 	        }
	    
 	        if(((arr[i])*(arr[i])+(arr[j])*(arr[j])) > ((arr[k])*(arr[k]))){
 	        return 0;
 	        }
	 	        if(((arr[i])*(arr[i])+(arr[j])*(arr[j])) < ((arr[k])*(arr[k]))){
 	        k--; 
 	        }
 	        return 0;
 	    }
 	 }
}
}

//METHOD 2 works 
//  sort(arr,arr+n);
//  for(int i =0;i<n;i++)
//  {
//      for(int j =i+1; j<n;j++)
//      {
//          for(int k =j+1;k<n;k++)
//          {
//              if((arr[i]*arr[i])+(arr[j]*arr[j])==(arr[k]*arr[k]))
//              return true;
//          }
//      }
//  }
 
//  return false;

//   }
};