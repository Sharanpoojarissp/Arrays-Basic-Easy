class Solution{
  public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        
        int max = INT_MIN;      //long long used -9999 pe test case pass nhi hora 
  
        for(int i = 0; i<n ; i++){
            if(a[i]> max){
                max = a[i];
            }
        }
        
        int min = INT_MAX;
        for(int i = 0; i<m ; i++){
            if(b[i] < min){
                min = b[i];
            }
        }
        
        
       return max*min;
        
    }
};