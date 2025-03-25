// merge 2 sorted array

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx] = A[i];
            idx--; i--;
        } else {
            A[idx] = B[j];
            idx--; j--;
        }
    }

    while(j >= 0) {
        A[idx] = B[j];
        idx--; j--;
    }
}

void print(vector<int>& A) {
    for(int val: A) {
        cout << val << " ";
    }
}
int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    merge(nums1, m, nums2, n);
    print(nums1);
}
