class Solution{
{
public:
    int minValueToBalance(int a[], int n)
    {
      int leftsum = 0;
      int rightsum = 0;
      
      int i =0;
      int j = n-1;
      
      while(j>i){
        leftsum = leftsum + a[i];
        rightsum = rightsum + a[j];
        
        i++;
        j--;
    }
    
    return abs(leftsum-rightsum);
    }
};