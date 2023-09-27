// TEMPO LIMITE EXCEDIDO !!!
#include <bits/stdc++.h>

using namespace std;

long long int contador(long long int num) {
    long long int cont = 0;
    long long int limite = num / 2;
    
    for (long long int a = 1; a <= limite; a++) {
        long long int b = a + cont;
        long long int soma = (a + b) * (b - a + 1) / 2;

        while (soma <= num) {
            if (soma == num) {
                cont++;
                break;
            }
            b++;
            soma += b;
        }
    }

    return cont + 1;
}

long long int teste(long long int num) {
    long long int cont = 0;
    long long int limite = num / 2;
    long long int a = 1;
    long long int b = 1;
    long long int soma = 0;

    while (a <= limite) {
        if (soma < num) {
            b++;
            soma += b;
        } else if (soma > num) {
            soma -= a;
            a++;
        } else {
            cont++;
            soma -= a;
            a++;
        }
    }

    return cont + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int N;
    while (cin >> N) {
        cout << contador(N) << endl;
    }

    return 0;
}