clas solution{
{
    public:
    void sort012(int a[], int n){
// {
//         sort(a,a+n);
        
       // You don't need to read input or print anything
//     //     for(int i = 0; i<n ; i++){
//     //     cout<<a[i]<<" ";
//     // }
//     }
// };

//METHOD 2 most optimised 
//Time O(n) using Dutch Flag Algorithm //strivers 
//applying thr Dutch National Flag Algorithm 
   
    int low = 0;
    int mid = 0 ;
    int high = n-1 ;
       
       while(mid<=high) {
           if(a[mid]==0){
               swap(a[low++], a[mid++]);
           } 
           else if(a[mid]==1){
               mid++;
           }  
           else if(a[mid]==2){
               swap(a[mid], a[high--]);
           }
       }
 }
};