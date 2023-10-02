#include <bits/stdc++.h>

using namespace std;

#define limite 30000010 // Raiz de 9*10^14
vector<long long int> primo; // Vetor que vai guardar todos os números primos de até 'limite'

void testaPrimos() {
    vector<bool> sieve(limite, true);
    for (int a = 2 ; a * a <= limite ; ++a) {
        if (sieve[a]) {
            for (int b = a * a ; b <= limite ; b += a) {
                sieve[b] = false;
            }
        }
    }
    for (int a = 3 ; a <= limite ; ++a) {
        if (sieve[a]) {
            primo.push_back(a);
        }
    }
}

long long int fatora(long long int N) {
    set<long long int> fatores;
    if (N < 3) {
        return 1;
    }
    long long int teste = N;
    for(size_t a = 0 ; a < primo.size() && teste != 1 ; a++) {
        if(primo[a] == N) {
            return 2;
        }
        while (teste % primo[a] == 0) {
            fatores.insert(primo[a]);
            teste /= primo[a];
        }
    }
    if(teste > 1) {
        fatores.insert(teste);
    }
    return fatores.size() + 2;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testaPrimos();

    long long int N;
    while(cin >> N) {
        if(N == 0) {
            cout << "0" << endl;
        } else {
            while( !(N & 1) ) {
                N >>= 1;
            }
            if(N < 3) {
                cout << "1" << endl;
            } else {
                cout << fatora(N) << endl;
            }
        }
    }
    return 0;
}