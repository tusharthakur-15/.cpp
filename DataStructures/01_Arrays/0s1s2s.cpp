#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// dutch national flag algorithm - O(n)
void sort(vector<int>& nums) {

    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid++; low++;
        } else if(nums[mid] == 1) {
            mid ++;
        } else {
            swap(nums[mid], nums[high]);
            high--;            
        }
    }
}

void print(vector<int>& nums) {
    for(int val: nums) {
        cout << val << " ";
    }
}

int main() {
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};

    // brute force
    // sort(nums.begin(), nums.end());
    // for(int val: nums) {
    //     cout << val << " ";
    // }

    sort(nums);
    print(nums);
}

