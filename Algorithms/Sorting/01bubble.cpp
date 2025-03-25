#include <iostream>
using namespace std;

// O(n2)
void bubble(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) { // array is already sorted
            return;
        }
    }
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

}
int main() {
    int n = 5;
    int arr[] = {4,1,5,2,3};

    bubble(arr, n);
    printArr(arr, n);
}