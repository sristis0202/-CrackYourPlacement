#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i=l, j=m+1, k=l //starting index of tmp array;
    int temp[5];
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i]; i++; k++;
        }
        else{
            temp[k]=arr[j]; k++;j++;
        }

    }
    while(i<=m){
        temp[k]=arr[i]; i++;k++; //copy all elements from left
        //subarray
    }
    while(j<=r){
        temp[k]=arr[j]; j++;k++; //copy all elements from right
        //subarray
    }
    for(int s=l; s<r;s++ ){
        arr[s]=temp[s];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l, m);
        mergeSort(arr,m+1, r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[5] = {4,6,1,2,7};
    mergeSort(arr, 0, 4);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}