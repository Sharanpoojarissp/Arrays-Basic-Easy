class Solution{
 public:
    
    //Method 1-
    int lastIndex(string s) 
    {
        int position = -1;
        int length = s.length();
        
        for(int i=length-1; i>=0 ; i--){
            if(s[i] == '1'){
                position = i;
                break;
            }
        }
        
        return position;
    }
  
//Method 2 - 
   int lastIndex(string s) 
    {
        for(int i=s.length();i>=0;i--)
            if(s[i]=='1')
                return i;
        return -1;
    }
};