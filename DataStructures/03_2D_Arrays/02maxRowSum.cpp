#include <iostream>
using namespace std;

int maxSum(int matrix[][3], int rows, int cols) {

    int maxSum = 0;

    for(int i=0; i<rows; i++) {
        int rowSum = 0;
        for(int j=0; j<cols; j++) {
            rowSum += matrix[i][j];
        }
        maxSum = max(rowSum, maxSum);
    }

    return maxSum; 
}

int main() {

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4, cols = 3;

    cout << maxSum(matrix, rows, cols);

    return 0;
}