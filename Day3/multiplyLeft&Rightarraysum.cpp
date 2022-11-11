int multiply(int arr[], int n)
{
   
   int product = 1;
   
    int sum1 = 0 ;
    for(int i= 0; i<n/2 ; i++){
        sum1 = sum1 + arr[i];
    }
    
    int sum2 = 0;
     for(int i= n/2; i<n ; i++){
        sum2 = sum2 + arr[i];
    }
    
  
   product = product*(sum1*sum2);  
}