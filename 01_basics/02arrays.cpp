#include <iostream>
using namespace std;
int main() {
    
    // output
    int arr[] = {2,3,1,5,4};
    int size = sizeof(arr) / sizeof(int);

    for(int i=0; i<size; i++) {
        // cout << arr[i] << endl;
    }

    // input
    int array[5];
    for(int i=0; i<size; i++) {
        // cout << "enter elements: ";
        // cin >> arr[i];
    }

    // smallest in array
    int smallest = INT_MAX;

    for(int i=0; i<size; i++) {
        if(arr[i] < smallest) {
            // smallest = arr[i];
        }
    }
    // cout << "smallest number is: " << smallest;

    int nums[5] = {1,2,3,4,5};

    for(int i=1; i<=5; i++) {
        cout << nums[i] << " ";
    }
    // it will print garbage value at index 5
}