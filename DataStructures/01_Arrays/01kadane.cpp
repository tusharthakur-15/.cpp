/*
#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> vec) {

    // print subarrays
    for(int st=0; st<vec.size(); st++) {
        for(int end=st; end<vec.size(); end++) {
            for(int i=st; i<=end; i++) {
                cout << vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int maxSum(vector<int> vec) {

    int size = vec.size();
    int maxSum = 0;

    // O(n2)
    for(int st=0; st<size; st++) {
        int currSum = 0;
        for(int end=st; end<size; end++) {
            currSum += vec[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int kadaneAlgo(vector<int> vec) {

    int currSum = 0, maxSum = 0;

    // O(n)
    for(int i=0; i<vec.size(); i++) {
        currSum += vec[i];
        maxSum = max(currSum, maxSum);
        if(currSum <0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {

    vector<int> vec = {3,-4,5,4,-1,7,-8};

    // subArray(vec);
    // cout << maxSum(vec);
    // cout << kadaneAlgo(vec);
    
}
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums) {
    for(int st=0; st<nums.size(); st++) {
        for(int end=st; end<nums.size(); end++) {
            for(int i=st; i<=end; i++) {
                cout << nums[i];
            }
        }
    }
}

int max(vector<int> nums) {
    int maxSum = INT_MIN;
    for(int st=0; st<nums.size(); st++) {
        int currSum = 0;
        for(int end=st; end<=nums.size(); end++) {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int kadane(vector<int> nums) {
    int currSum = 0, maxSum = INT_MIN;
    for(int i=0; i<nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}
int main() {
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    cout << max(nums);
}