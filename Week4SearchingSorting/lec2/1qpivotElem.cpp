//pivot element -> the element at which monotonic function breaks is called pivot element -> for the given array
//pivot element either can be 7 or 3 the below solution is considering pivot element as 3
#include <iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s = 0, e = n-1;
    int m = s + (e - s)/2;

    while(s < e){

        if(arr[m] >= arr[0]){
            s = m + 1;
        }else{
            e = m;
        }

        m = s + (e - s)/2;
    }

    return s;
}

int main(){

    int arr[5] = {5, 6, 7, 3, 4};
    cout << "Pivot element  is at index " << getPivot(arr, 5) << endl;
}