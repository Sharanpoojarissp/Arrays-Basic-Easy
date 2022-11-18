int transitionPoint(int arr[], int n) {
//     int i = 0;
//     int index = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == 0){
//             i++;
//         }
//           if(arr[i] == 1){
//             index = i-1;
//         }
//   }
//     return index;

  for(int i=0;i<n;i++){
            if(arr[i]==1){
            return i;
        }
     }
            return -1;
    }