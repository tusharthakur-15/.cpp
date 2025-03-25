#include <iostream>
using namespace std;

// O(n2)
int diagonalSum(int matrix[][4], int n) {
    int sum = 0;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {

            if(i == j) { // primary diagonal
                sum += matrix[i][j];
            } else if(j == n-i-1) { // secondary diagonal
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

// O(n)
int diagonal(int matrix[][4], int n) {
    int sum = 0;

    for(int i=0; i<n; i++) {
        sum += matrix[i][i];

        if(i != matrix[i][n-i-1]) {
            sum += matrix[i][n-i-1];
        }
    }

    return sum;
}

int main() {
    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = 4;

    // cout << diagonalSum(matrix, n);
    cout << diagonal(matrix, n);
}