#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> vetorOriginal (0);
    std::vector<int> vetorSaida;
    int entrada, contador = 0;
    int numeroRepetido;

    do {
        cin >> entrada;
        if (entrada > 0) {
            vetorOriginal.push_back(entrada);
        }
    } while (entrada > 0);

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
    cout << endl;

    return 0;
}