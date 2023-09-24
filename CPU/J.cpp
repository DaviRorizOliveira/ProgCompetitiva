#include <bits/stdc++.h>

using namespace std;

struct lista {
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa_lista(void) { // Função para inicializar a lista com NULL
    return NULL;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Lista* teste;
    teste = inicializa_lista();

    return 0;
}