#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int contador;
    char espaco = ' ';
    string linhaArquivo;

    ifstream arquivo("arquivo");

    while (getline (arquivo, linhaArquivo)) {
        for (int i = 0; (i = linhaArquivo.find(espaco, i)) != string::npos; i++){
            contador++;
        }
    }

    cout << "qtd: " << contador << endl;

    return 0;
}