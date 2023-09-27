#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    // cout << 2^(2 * n-1) - n * 2^(n - 1) - 1 << endl;
    cout << pow(2, (2 * n - 1) ) - n * pow(2, (n - 1) ) - 1 << endl;

    return 0;
}