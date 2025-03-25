/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(n2)
void pairSum(vector<int> vec, int target) {

    for(int i=0; i<vec.size(); i++) {
        for(int j=i+1; j<vec.size(); j++) {
            if(target == vec[i] + vec[j]) {
                cout << i << "," << j;
                return;
            }
        }
    }
}

// O(n), using 2 pointers approach - required sorted vector
void pairSumTwo(vector<int> vec, int target) {

    int left = 0, right = vec.size() - 1;

    while(left < right) {
        int pairSum = vec[left] + vec[right];
        if(pairSum > target) {
            right--;
        } else if(pairSum < target) {
            left++;
        } else {
            cout << left << "," << right;
            return;
        }
    }
}

//  The ampersand (&) means that the vector is passed by reference.
//  Passing by reference allows the function to access the original vector without making a copy
int majorityEle(vector<int>& v) {  
    int n = v.size();

    // O(n2)
    for(int i=0; i<n; i++) {
        int freq = 0;
        for(int j=i; j<n; j++) {
            if(v[i] == v[j]) {
                freq++;
            }
            if(freq > n/2) {
                return v[i];
            }
        }
    }
    return -1;
}

// O(nlogn), O(n)
int mooreAlgo(vector<int> v) {

    int n = v.size();

    // sort
    sort(v.begin(), v.end());

    int freq = 1, ans = v[0];

    for(int i=1; i<n; i++) {
        if(v[i] == v[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = v[i];
        }
        if(freq > n/2) {
            return ans;
        }
    }
    return ans;
}

int main() {

    // vector<int> vec = {2,7,11,15};
    // int target = 9;
    // pairSum(vec, target);
    // pairSumTwo(vec, target);

    vector<int> v = {2,2,1,1,1};
    // cout << majorityEle(v);

    // cout << mooreAlgo(v);
    
}
*/

#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int>& nums, int targetSum) {
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i] + nums[j] == targetSum) {
                cout << nums[i] << nums[j] << endl;
                break;
            }
        }
    }
}

vector<int> pS(vector<int>& nums, int target) {
    vector<int> ans;
    int i=0, j = nums.size()-1;
    while(i < j) {
        if(nums[i] + nums[j] > target) j--;
        else if(nums[i] + nums[j] < target) i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans; 
        }
    } 
}
int main() {
    vector<int> nums = {2,7,11,15};
    int targetSum = 9;

    pairSum(nums, targetSum);
}