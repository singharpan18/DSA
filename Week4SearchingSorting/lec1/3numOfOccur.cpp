#include <iostream>
using namespace std;

int firstOcc(int arr [], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[], int key, int size){
    int s=0, e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;//error ans = arr[mid]
            s = mid + 1;
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

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int first = firstOcc(arr, 4, 8);
    int last = lastOccur(arr, 4, 8);
    int totalOccur = last - first + 1;
     
    cout << "Total Occurrence: " << totalOccur ;

    return 1;
}
