#include <iostream>
#include <vector>
#include <string>

int main() {
    // Criando um vetor de strings
    std::vector<std::string> vetorDeStrings;

    // Adicionando strings ao vetor
    vetorDeStrings.push_back("Primeira String");
    vetorDeStrings.push_back("Segunda String");
    vetorDeStrings.push_back("Terceira String");

    // Acessando e imprimindo strings do vetor
    for (const std::string& str : vetorDeStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}