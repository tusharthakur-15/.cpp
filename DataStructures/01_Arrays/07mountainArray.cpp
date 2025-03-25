// peak index in mountain array
#include <iostream>
#include <vector>
using namespace std;

// using linear search - O(n)
int peakArray(vector<int>& arr) {
    int n = arr.size();
    for(int i=1; i<n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            return i;
        }
    }
    return -1;
}

// using binary search - O(nlogn)
int peakArr(vector<int>& arr) {
    int st = 1, end = arr.size() - 2;

    while(st <= end) {
        int mid = st + (end - st)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            return mid;
        }
        else if(arr[mid] > arr[mid-1]) { // right
            st = mid+1;
        } 
        else { // left
            end = mid-1;
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {0,3,8,9,5,3};
    // cout << peakArray(arr);

    cout << peakArr(arr);
}