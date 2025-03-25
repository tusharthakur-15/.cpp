// search in 2D matrix I

#include <iostream> 
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // BS on rows
    int m = matrix.size(), n = matrix[0].size();

    int stRow = 0, endRow = m-1;
    while(stRow <= endRow) {
        int midRow = stRow + (endRow - stRow) / 2;

        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]) {
            // found the row --> BS on this row
            int st = 0, end = n-1;

            int mid = st + (end -st) / 2;
            while(st <= end) {
                if(target == matrix[midRow][mid]) {
                    return true;
                } else if(target > matrix[midRow][mid]) {
                    st = mid +1;
                } else {
                    end = mid - 1;
                }
            }
        } else if(target >= matrix[midRow][n-1]) {
            // down
            stRow = midRow + 1;
        } else {
            // up
            endRow = midRow -1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 34;

    cout << searchMatrix(matrix, target);

    // not giving output
}