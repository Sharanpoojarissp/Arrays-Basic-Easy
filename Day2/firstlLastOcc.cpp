vector<int> find(int arr[] , int n , int x)
{
    vector<int> v; //first make a vector to store the index of the x 
    
    //METHOD 1 --> hits TLE 
    //   int i = 0;
    //   int j = n-1 ;
    
    //     for(int i = 0 ; i<n ;i++){
    //     if(arr[i] ==x){
    //         cout<<arr[i];
    //             break;
    //         }
    //      }
         
    //     for(int j = n-1 ; j<0 ;j++){
    //     if(arr[j] ==x){
    //         cout<<arr[j];
    //             break;
    //         }
    //      }
    
    // cout<<arr[i]<<" "<<arr[j];
    

    /* we could have used  for(i = 0 --> n){
                              for(j = n-1 --> 0){
                              }
    but its TC will be  O(N2) */
   // METHOD 2 --> WORKS 
    int i = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] ==x){
            v.push_back(i);  //to push element into the vector 
            break;  //otherwise wo age bhi check karega na 
    }
  }
  
  // originally it was i for both the loops but i changed it to j 
  int j = n-1;
  for(int j = n-1; j>= 0; j--){
        if(arr[j] ==x){
            v.push_back(j);  //to push element into the vector 
            break;
    }
  }
  
  if(v.empty()){            
      return {-1,-1};
  }
  
  {return v;}
  
  
  
 }