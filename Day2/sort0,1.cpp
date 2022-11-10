class Solution{   
public:
    void segregate0and1(int arr[], int n) {
       // method 1  
        int i = 0;
        int j = n-1;
        
        while(i<j){
        //condition 1 - agar 1st pos pe 0 hai 
        if(arr[i] == 0){
            i++;
        }
        
        //condition 2 - agar last pos pe 1 hai
          if(arr[j] == 1){
            j--;
        }
        
        //condition 3 - agar 1st pe 1 aur last pe 0 , swap them   
          if(arr[i] == 1 && arr[j] == 0 ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
     }
    
    }
};