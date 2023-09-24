#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string mov;

    while(cin >> mov && mov[0] != '0') {
        int pos = 0;
        bool valid = true;

        if(mov[0] == 'E') {
            valid = false;
        } else {
            for(int a = 0 ; a < mov.size() ; a++) {
                if(mov[a] == 'D') {
                    pos++;
                } else {
                    pos--;
                }
                if(pos < 0 || pos > 10) {
                    valid = false;
                }
            }
        }
        if(pos != 0) {
            valid = false;
        }

        if(valid) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}