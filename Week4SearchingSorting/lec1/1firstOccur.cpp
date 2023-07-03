#include <iostream>
using namespace std;
int firstOcc(int arr [], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;//main logic -> first occ h mtlb left part m h
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

int main()
{
    int arr[] = {0, 5, 5, 6, 6, 6};
    int first = firstOcc(arr, 6, 5);
        
    cout << "First Occurrence: " << first ;

    return 1;
}
