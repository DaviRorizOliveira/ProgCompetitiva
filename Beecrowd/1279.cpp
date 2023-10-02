// WRONG ANSWER !!!
#include <bits/stdc++.h>

using namespace std;

bool bissexto(int N) {
    if( (N % 400 == 0) || ( (N % 4 == 0) && (N % 100 != 0) ) ) {
        return true;
    }
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    bool bis, hul;
    while(cin >> N) {
        hul = false;
        bis = bissexto(N);
        if(bis) {
            cout << "This is leap year." << endl;
            if(N % 55 == 0) {
                cout << "This is bulukulu festival year.";
            }
        }
        if(N % 15 == 0) {
            hul = true;
            cout << "This is huluculu festival year." << endl;
        }
        if(!bis && !hul) {
            cout << "This is an ordinary year." << endl;
        }
        cout << endl;
    }
    return 0;
}