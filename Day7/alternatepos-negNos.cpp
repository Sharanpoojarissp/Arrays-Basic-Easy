class Solution{
public:

// 	void rearrange(int arr[], int n) {
// 	    vector<int> positive,negative;
// 	   // vector<int> negative;
	    
// 	   for(int i=0 ; i<n ;i++){
// 	       if(arr[i] >= 0){
// 	         positive.push_back(arr[i]);
// 	       }
// 	   //   if(arr[i] < 0){
// 	   else{
// 	         negative.push_back(arr[i]);
// 	   }
// 	   }
// 	   //now initializing the both array & final array 
	   
// 	   int i=0,j=0,k=0; 
// 	   while(j<positive.size() && i<negative.size()){
// 	       arr[k++] = positive[j++];
// 	       //k++;
// 	       //j++;
	       
// 	       arr[k++] = negative[i++];
// 	       //k++;
// 	       //i++;
	       
// 	   }
	   
// 	   while(j<positive.size()){
// 	       arr[k++] = positive[j++];
// 	       // k++;
// 	       //j++;
// 	   }
	   
// 	    while(i<negative.size()){
// 	       arr[k++] = negative[j++];
// 	       // k++;
// 	       // i++;
// 	   }
// 	  }   

    //POTD -  Siddharth Hazra
	void rearrange(int arr[], int n) {
    vector<int>neg,pos;
    for(int i =0; i<n;i++){
        if(arr[i]<0 ){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    
    int i=0,j=0,k=0;
    while(i<neg.size() && j<pos.size()){
        arr[k++] = pos[j++];
        arr[k++] = neg[i++];
     }
     
    while(j<pos.size()){
        arr[k++] = pos[j++];
    }
    
    while(i<neg.size()){
        arr[k++] = neg[i++];
     }
   }
};