#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// brute force approach
bool twoSumm(vector<int>& vec, int target) {
    for(int i=0; i<vec.size(); i++) {
        for(int j=i+1; j<vec.size(); j++) {
            if(vec[i] + vec[j] == target) {
                return true;
            }
        }
    }
    return false;
}

// two pointers approach - O(nlogn)
bool twooSum(vector<int>& vec, int target) {
    sort(vec.begin(), vec.end());
    int st = 0, end = vec.size()-1;
    while(st < end) {
        int sum = vec[st] + vec[end];
        if(sum == target) {
            return true;
        } else if(sum > target) {
            end--;
        } else {
            st++;
        }
    }
    return false;
    
}

// using hashing - optimized O(n)
vector<int> twoSum(vector<int>& vec, int target) {
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<vec.size(); i++) {
        int first = vec[i];
        int second = target - first;

        if(m.find(second) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }

        m[first] = i;
    }

    return ans;
}

int main() {
    vector<int> vec = {5,2,11,7,15};
    int target = 9;

    // cout << twoSumm(vec, target);
    // cout << twooSum(vec, target);
    vector<int> ans = twoSum(vec, target);

    for(int val: ans) {
        cout << val << " ";
    }

}