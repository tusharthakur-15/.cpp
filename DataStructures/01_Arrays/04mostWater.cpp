#include <iostream>
#include <vector>
using namespace std;

// brute force - O(n2)
int maxWater(vector<int>& height) {
    
    int size = height.size();
    int maxWater = 0;

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            int ht = min(height[i], height[j]);
            int width = j-i;
            int currWater = ht * width;
            maxWater = max(currWater, maxWater);
        }
    }
    return maxWater;
}

// 2 pointer approach - O(n)
int mostWater(vector<int>& height) {
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while(lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = ht * w;
        maxWater = max(currWater, maxWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}
int main() {

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    // cout << maxWater(height);

    cout << mostWater(height);
}