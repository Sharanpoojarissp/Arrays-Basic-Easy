
/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int ar[], int n, long long int mod)
 {
     long long int product = 1;
    //  long long int k = 0;  doesnt work if k is initialized 
     for(int i = 0; i<n ; i++){
         
         product = (product*ar[i])%mod;
         
    /*Output: 
    Return the product of array elements under a given modulo.
    That is, return (Array[0]*Array[1]*Array[2]...*Array[n])%modulo.  */
     }
     
     return product;
     
 }