#include <bits/stdc++.h>

using namespace std;

const int N = 4; // Tamanho do tabuleiro
const int M = sqrt(N);
int tabuleiro[N][N]; // Mapa do tabuleiro do sudoku

bool isValid(int linha, int coluna, int num) { // Verifica se é válido na linha, coluna e quadrante
    // Verifica se o número 'num' não está na mesma linha ou coluna
    for (int i = 0 ; i < N ; i++) {
        if (tabuleiro[linha][i] == num || tabuleiro[i][coluna] == num) {
            return false;
        }
    }
    // Verifica se o número 'num' não está no mesmo quadrante NxN
    int quadranteLinha = linha - linha % M;
    int quadranteColuna = coluna - coluna % M;
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 2 ; j++) {
            if (tabuleiro[i + quadranteLinha][j + quadranteColuna] == num) {
                return false;
            }
        }
    }
    return true;
}
/* Mapa para um N = 4
1 0 0 0
0 0 0 3
0 0 0 0
2 0 0 0
*/

/* Mapa para um N = 9
3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0
*/
bool solveSudoku() {
    for (int linha = 0 ; linha < N ; linha++) { // Vai de linha em linha
        for (int coluna = 0 ; coluna < N ; coluna++) { // Vai de coluna em coluna
            if (tabuleiro[linha][coluna] == 0) { // Verifica se não existe nenhum número do 1 ao 9 na posição
                for (int num = 1 ; num <= N ; num++) { // Verifica todos os números do 1 ao 9
                    if (isValid(linha, coluna, num)) {
                        tabuleiro[linha][coluna] = num; // Se for válido, põe o número na posição
                        if (solveSudoku()) { // Faz a chamada recursiva
                            return true;  // Encontrou uma solução
                        }
                        tabuleiro[linha][coluna] = 0; // Desmarca a posição (Backtrack)
                    }
                } // Se nenhum número do 1 ao 9 puder ser colocado naquela posição, então não existe solução
                return false; // Não há solução para o sudoku
            }
        }
    }
    return true; // Todos os blocos já foram preenchidos
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0 ; i < N ; i++) { // Faz a leitura do mapa/matriz
        for (int j = 0 ; j < N ; j++) {
            cin >> tabuleiro[i][j];
        }
    }
    if (solveSudoku()) { // Se tiver solução
        for (int i = 0 ; i < N ; i++) {
            for (int j = 0 ; j < N ; j++) {
                cout << tabuleiro[i][j] << " "; // Printa todo o sudoku
            }
            cout << endl;
        }
    } else {
        cout << "Sem solução." << endl;
    }

    return 0;
}
