#include <bits/stdc++.h>
using namespace std; 

void selectionsort(int arr[],int n){

    for(int i =0;i<=n-2;i++){

        int min=i;
        for(int j =i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
        swap(arr[min],arr[i]);
    }

}

int main (){
    int n ;
    cout<<"enter the n: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of arr: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr, n );
    cout<<"the sorted arr is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}