#include <iostream>
#include <vector>
using namespace std;

// brute force - O(n2)
void exceptSelf(vector<int>& nums) {
    int n = nums.size();

    for(int i=0; i<n; i++) {
        int product = 1;
        for(int j=0; j<n; j++) {
            if(i != j) {
                product *= nums[j];
            }
        }
        cout << product << " ";
    }
}

// by calculating prefix and suffix - O(n)
vector<int> exSelf(vector<int>& nums) {

    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    // prefix
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    // suffix
    for(int i=n-2; i>=0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for(int i=0; i<n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main() {

    vector<int> nums = {1,2,3,4}; 
    // exceptSelf(nums);

    vector<int> result = exSelf(nums);
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }

}