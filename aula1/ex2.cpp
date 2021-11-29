#include <iostream>

using namespace std;

typedef struct{
    double** m;
    int nLinhas;
    int nColunas;
} Matriz;

void inicializaMatriz(Matriz &X, int ls, int cs){
    X.nLinhas = ls;
    X.nColunas = cs;
    X.m = new double *[ls];
    for (int i = 0; i < ls; i++) {
        X.m[i] = new double [cs];
        for (int j = 0; j < cs; j++) {
            X.m[i][j] = 0.0;
        }
    }
}

void apagaMatriz(Matriz &X){
    for(int i = 0; i < X.nLinhas; i++){
        free((double *)(X.m[i]));
    }
    free((double *)(X.m));
}

void transposta(Matriz &X){
    Matriz transposta;
    inicializaMatriz(transposta, X.nColunas, X.nLinhas);
    for(int i = 0; i < X.nLinhas; i++){
        for(int j = 0; j < X.nColunas; j++){
            transposta.m[j][i] = X.m[i][j];
        }
    }

    X.m = transposta.m;
    X.nLinhas = transposta.nLinhas;
    X.nColunas = transposta.nColunas;
}

Matriz multiplica_por_cte(Matriz &X, double k){
    Matriz multiplicada;
    inicializaMatriz(multiplicada, X.nColunas, X.nLinhas);
    for(int i = 0; i < X.nLinhas; i++){
        for(int j = 0; j < X.nColunas; j++){
            multiplicada.m[i][j] = X.m[i][j] * k;
        }
    };

    multiplicada.nLinhas = X.nLinhas;
    multiplicada.nColunas = X.nColunas;
    return multiplicada;
}

void imprimeMatriz(Matriz &X){
    cout << "Numero de linhas: " << X.nLinhas << endl;
    cout << "Numero de colunas: " << X.nColunas << endl;
    for(int i = 0; i < X.nLinhas; i++) {
        for(int j = 0; j < X.nColunas; j++) {
            cout << X.m[i][j] << " ";
        }
        cout << endl;
    };
    cout << endl;
}

int main() {
    Matriz A, B, R;
    std::cout << "A:: " << std::endl;
    inicializaMatriz(A,2,3);
    imprimeMatriz(A);

    std::cout << "Transposta de A:: " << std::endl;
    transposta(A);
    imprimeMatriz(A);
    apagaMatriz(A);

    std::cout << std::endl << "B:: " << std::endl;
    inicializaMatriz(B,4,4);
    imprimeMatriz(B);

    std::cout << std::endl << "R = k*B " << std::endl;
    R = multiplica_por_cte(B,5);
    imprimeMatriz(R);
    apagaMatriz(B);
    apagaMatriz(R);
    return 0;
}