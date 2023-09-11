#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int N, H;
    while (cin >> N >> H && N != 0) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int result = 0;
        vector<int> B(N);
        for(int aux = 0 ; aux < N ; aux++) {
            cin >> B[aux];
            if(B[aux] <= H) {
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}