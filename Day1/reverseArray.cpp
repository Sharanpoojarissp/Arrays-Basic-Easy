#include<iostream>
using namespace std;

// function for printing array
void printArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    
}

// function for array input
void arrInput(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}
// function to reverse the array
void reverse(int *arr, int n){
    int s=0, e=n-1;
    while (s<=e)
    {
        swap(arr[s++], arr[e--]);
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        arrInput(arr, n);
        reverse(arr, n);
        printArr(arr,n);
    }
}