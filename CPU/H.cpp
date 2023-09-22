#include <bits/stdc++.h>

#define MAX 20

using namespace std;

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

void makeBinaryString(int N) {
    vector<string> vetor;

    for(int aux = 0 ; aux < N ; aux++) {
        string binary = bitset<MAX>(aux).to_string();
        vetor.push_back(binary);
    }
    //for(int aux = 0 ; aux < vetor.size() ; aux++) {
    //    cout << vetor[aux] << std::endl;
    //}
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    while (cin >> N && N >= 0) {
        int verticie = doisElevadoN(N);
        int arestas = numArestas(N);

        makeBinaryString(N);

        cout << verticie << ' ' << arestas << endl;
    }
    
    //int decimal = 65;
    //const int n = 8;
    //string binary = bitset<n>(decimal).to_string();
    //cout << binary << endl;        // 01000001

    return 0;
}