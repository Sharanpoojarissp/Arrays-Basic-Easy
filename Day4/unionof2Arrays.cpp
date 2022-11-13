class Solution{
        public:
        int doUnion(int a[] , int n , int b[] , int m){
            
            
            //METHOD 1 - using unordered set 
            unordered_set <int> s;
            
            for(int i =0; i<n; i++) s.insert(a[i]);
            for(int i =0; i<m; i++) s.insert(b[i]);
            
            return s.size();
        }
        
        // int c[1000];
        // int j = 0;
        // for(int i = 0 ; i<n ; i++){
        //     c[i] = a[i];
        // }
        // for(int j = 0; j<m ; j++){
        //     c[i] = b[j];
            
        // sort(c, c+n+m);
        
        // int count = 1;
        // for(int i = 1; i<n+m ; i++){
        //     if(c[i]!=c[i-1]){
        //         count++;
        //     }
        // }
        
        // return count
        // }
};