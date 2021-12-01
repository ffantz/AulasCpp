#include <iostream>
#include <algorithm> // std::sort
#include <vector>

using namespace std;

// ordenacao manual
vector<int> ordenaVetor(vector<int> vetor) {
    int aux = 0;
    if (vetor.size() > 1) {
        for (int i = 0; i < vetor.size(); i++) {
            for (int j = 0; j < vetor.size() - i - 1; j++) {
                if (vetor.at(j) > vetor.at(j + 1)) {
                    aux = vetor.at(j);
                    vetor.at(j) = vetor.at(j + 1);
                    vetor.at(j + 1) = aux;
                }
            }
        }
    }
    return vetor;
}

// leitura do vetor
vector<int> inicializaVetor(vector<int> vetor) {
    int entrada = 0;

    do {
        cin >> entrada;
        if (entrada > 0) {
            vetor.push_back(entrada);
        }
    } while (entrada > 0);

    return vetor;
}

int main() {
    vector<int> vetorOriginal;
    vector<int> vetorSaida;
    int contador = 0;
    int numeroRepetido;

    vetorOriginal = inicializaVetor(vetorOriginal);
    // sort(vetorOriginal.begin(), vetorOriginal.end());
    vetorOriginal = ordenaVetor(vetorOriginal);

    for (int i = 0; i < vetorOriginal.size(); i++) {
        if (i == 0) {
            numeroRepetido = vetorOriginal.at(i);
        }
        if (vetorOriginal.at(i) == numeroRepetido) {
            contador++;
        } else {
            vetorSaida.push_back(contador);
            vetorSaida.push_back(numeroRepetido);
            contador = 1;
            numeroRepetido = vetorOriginal.at(i);
        }
    }

    vetorSaida.push_back(contador);
    vetorSaida.push_back(numeroRepetido);

    for (int i = 0; i < vetorSaida.size(); i++) {
        cout << " " << vetorSaida.at(i);
    }

    return 0;
}