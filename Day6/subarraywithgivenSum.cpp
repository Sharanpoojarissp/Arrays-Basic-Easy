class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
     vector<int>ans;
        long long sum = 0;
        int start = 0;
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
            while(start<i && sum > s){
                sum = sum - arr[start];
                start++;
            }
            if(sum == s){
                ans.push_back(start+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
    
class Solution 
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here  
        if(s==0) return {-1};
        vector<int>v;
        long sum=0;
        long start=0;
        for(int i=0; i<n; i++){
            if(sum<s){
                sum+=arr[i];
            }
        while(sum>s){
            sum-=arr[start];
            start++;
        }
        if(sum==s){
            v.push_back(start+1);
            v.push_back(i+1);
            return v;
          }
        }
        return {-1};
    }
}; 