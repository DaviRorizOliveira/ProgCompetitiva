#include <bits/stdc++.h>

using namespace std;

/*
Fórmulas:

Vérticies - 2^N
Arestas - (N * 2^N) / 2
Diagonais principais - 2^N / 2 , para N > 2
Diagonais secundárias - (N + 1) * N^(N - 2) , para N > 3
*/

int doisElevadoN(int N) {
    if(N == 0) {
        return 1;
    } else {
        int result = 1;
        for(int a = 0 ; a < N ; a++) {
            result = result * 2;
        }
        return result;
    }
}

int numArestas(int N) {
    int aux = doisElevadoN(N);
    return (N * aux) / 2;
}

int diagPrincipais(int N) {
    if(N < 2) {
        return 0;
    } else {
        return doisElevadoN(N) / 2;
    }
}

int diagSecundarias(int N) {
    if(N < 3) {
        return 0;
    } else {
        int result = 1;
        for(int a = 0 ; a < N - 2 ; a++) {
            result = result * N;
        }
        return (N + 1) * result;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while (cin >> N && N <= 20) {
        int verticie = doisElevadoN(N);
        int arestas = numArestas(N);
        int principais = diagPrincipais(N);
        int secundarias = diagSecundarias(N);

        cout << verticie << ' ' << arestas << ' ' << principais << ' ' << secundarias << endl;
    }
    return 0;
}