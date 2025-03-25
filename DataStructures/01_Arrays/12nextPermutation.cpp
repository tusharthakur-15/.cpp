#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(n)
void nextPermutation(vector<int>& A) {
    // find the pivot
    int pivot = -1, n = A.size();

    for(int i = n-2; i >= 0; i--) {
        if(A[i] < A[i+1]) {
            pivot = i;
            break;
        }
    }

    // if pivot not exist
    if(pivot == -1) {
        reverse(A.begin(), A.end());
        return;
    }

    // next larger element
    for(int i = n-1; i > pivot; i--) {
        if(A[i] > A[pivot]) {
            swap(A[i], A[pivot]);
            break;
        }
    }

    // reverse (pivot + 1) to (n-1)
    int i = pivot + 1, j = n-1;
    while(i <= j) {
        swap(A[i], A[j]);
        i++, j--;
    } 
}

void print(vector<int>& A) {
    for(int val: A) {
        cout << val << " ";
    }
}

int main() {
    vector<int> arr = {1,2,3};

    // in c++ STL - there is a function for next permutation
    // next_permutation(arr.begin(), arr.end());

    nextPermutation(arr);
    print(arr);

}