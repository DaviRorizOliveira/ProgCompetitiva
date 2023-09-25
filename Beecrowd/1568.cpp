// WRONG ANSWER !!!
#include <bits/stdc++.h>

using namespace std;

int contador(int num) {
    int cont = 0, soma;
    int limite = (num / 2) + 1;

    if(num < 3) {
        return 1;
    }

    for(int a = 1 ; a <= limite ; a++) {
        soma = 0;
        for(int b = a ; b <= limite ; b++) {
            soma += b;
            if(soma == num) {
                cont++;
                break;
            }
            if(soma > num) {
                break;
            }
        }
    }
    return cont + 1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    while(cin >> N) {
        cout << contador(N) << endl;
    }
    return 0;
}