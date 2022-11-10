//User function Template for C++

// //Method 1 
void rotate(int arr[], int n){
// // {
// //     // for(int i = 1 ; i<n ; i++){
// //     //     swap(arr[0] , arr[i]);
// //     // }
// // }


// //Method 2  ===> see once whether working or not 

// // void rotate(int arr[], int n){
//     // 1 2 3 4 5 as an array 
//     int tmp = arr[0]; //free up the space for last element --> 5
//     arr[0] = arr[n-1]; // once freed place it in the first place -->  5 placed in 1st space
//     arr[n-1] = tmp; // now new temp is the 1st element --> 0 
//     for(int i = 1; i < n; i++){
//         swap(arr[i] , tmp);   // form 5 1 2 3 4 temp(0) so swap 0&1 
//                               // form 5 0 2 3 4 1 
//                               // loop continue for 2nd and further iterations
//     }
// }


//Method 3 
int tmp = arr[0];
 arr[0] = arr[n-1];
 arr[n-1] = tmp;
 for(int i = 1; i < n; i++){
     swap(arr[i] , arr[n-1]);
 
 }
}