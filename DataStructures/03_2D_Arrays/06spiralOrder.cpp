#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {

    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    vector<int> ans;

    while(srow <= erow && scol <= ecol) {
    
        // top
        for(int j=scol; j <= ecol; j++) {
            ans.push_back(mat[srow][j]);
        }
        // right
        for(int i=srow+1; i <= erow; i++) {
            ans.push_back(mat[i][ecol]);
        }
        // bottom
        for(int j=ecol-1; j >= scol; j--) {
            if(srow == erow) {
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        //left
        for(int i=erow-1; i >= srow+1; i--) {
            if(scol == ecol) {
                break;
            }
            ans.push_back(mat[i][scol]);
        }

        srow++; erow--; scol++; ecol--;
    }

    return ans;


}

int main() {
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    vector<int> order = spiralOrder(matrix);

    for(int val: order) {
        cout << val << " ";
    }
}