// NÃO FINALIZADO !!!
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    string nome, cor;
    char tamanho;
    while(cin >> N && N != 0) {
        for(int a = 0 ; a < N ; a++) {
            cin.ignore();
            getline(cin, nome);
            cin >> cor >> tamanho;
        }
        cout << nome << endl;
        cout << cor << " " << tamanho << endl;
    }
    return 0;
}