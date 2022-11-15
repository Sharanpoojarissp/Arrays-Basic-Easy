class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        //bruteforce method to find the solution 
       long sum = accumulate(array.begin(),array.end(),0);
        
        long arraysum= (n*(n+1))/2;
        
        return arraysum-sum;
            
            
    //     int sum=0;

    //     for(int i=0; i<n-1; i++){

    //         sum=sum^array[i];

    //       }

    //       for(int i=0; i<=n; i++){

    //         sum=sum^i;

    //       }

    // return sum;

//     total = (n*(n+1))/2;
//     for(int i = 0 ; i<n ; i++){
//         sum = sum + arr[i];
//     }
//     cout<<total-sum;
// }


    }
};