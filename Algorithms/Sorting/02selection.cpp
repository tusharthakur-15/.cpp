#include <iostream>
using namespace std;

// O(n2)
void selection(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        int smallestIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
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

    selection(arr, n);
    printArr(arr, n);
}