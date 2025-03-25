#include <iostream> 
using namespace std;

int xpowN(int x, int n) {

    // corner cases
    if(n == 0) return 1;
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == -1 && n%2 == 0) return 1;
    if(x == -1 && n%2 != 0) return -1;

    int binForm = n;

    if(n < 0) {
        x = 1/x;
        binForm = -binForm;
    }

    int ans = 1;

    while(binForm > 0) {
        if(binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    int x = 3, n = 5;
    cout << xpowN(x,n);
}