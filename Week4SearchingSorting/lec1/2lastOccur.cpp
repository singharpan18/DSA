//error - mistake done by u while writing code by self
#include<iostream>
using namespace std;

int lastOccur(int arr[], int key, int size){
    int s=0, e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;//error ans = arr[mid]
            s = mid + 1;//main logic -> last occ h mtlb right part m h
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;//error forget
    }
    return ans;
}

int main(){

    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int last = lastOccur(arr, 4, 8);
    cout << "Last Occur: " << last;
    return 1;
}