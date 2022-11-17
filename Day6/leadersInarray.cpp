class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
    vector<int> v;
    int max_right;
    max_right = a[n - 1];
    v.push_back(max_right);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max_right)
        {
            max_right = a[i];
            v.push_back(max_right);
        }
    }
    reverse(v.begin(), v.end());
    return v;
        
    }
};