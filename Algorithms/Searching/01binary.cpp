#include <iostream> 
#include <vector>
using namespace std;

// binary search works on sorted array
int binarySearch(vector<int> arr, int target) {
    int st = 0, end = arr.size() - 1;

    while(st <= end) {

        // int mid = (st + end) / 2;
        int mid = st + (end-st) / 2; // optimized

        if(arr[mid] < target) {
            st = mid+1;
        } else if(arr[mid] > target) {
            end = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {

    vector<int> arr = {-1,0,3,4,5,9,12};
    int target = 12;

    cout << binarySearch(arr, target);
    
}