int* game_with_number(int arr[], int n)
{

    for(int i =0 ; i<n-1 ; i++){        //1 2 3 4 5 
        arr[i] = arr[i] ^ arr[i+1];
    }
    
    return arr;
    
}