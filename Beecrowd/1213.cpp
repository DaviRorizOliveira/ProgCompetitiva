// TEMPO LIMITE EXCEDIDO !!!
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while(cin >> N) {
        int result = 2;
        for(int a = 11 ; a % N != 0 ; a = 10 * a + 1) {
            result++;
        }
        cout << result << endl;
    }
    return 0;
}