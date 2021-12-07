#include "matrix.h"
#include <iostream>

using namespace std;

// contrutor default - cria uma matriz vazia com nRows = nCols = 0
Matrix::Matrix(){
    this->nRows = this->nCols = 0;
}

// contrutor parametrico 1 - cria uma matriz com nRows = rows, nCols = cols e
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem){
    this->nRows = rows;
    this->nCols = cols;
    this->m = new double *[rows];
    for(int i = 0; i < this->nRows; i++){
        this->m[i] = new double [cols];
    }

    for(int i = 0; i < this->nRows; i++){
        for(int j = 0; j < this->nCols; j++){
            this->m[i][j] = elem;
        }
    }
}

// destrutor
Matrix::~Matrix() {
    cout << "destrutor" << endl;
    delete this->m;
}

// obtem o numero de linhas
int Matrix::getRows() const {
    return this->nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {
    return this->nCols;
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {
    Matrix transposta(this->nCols, this->nRows, 0);
    for(int i = 0; i < this->nCols; i++){
        for(int j = 0; j < this->nRows; j++){
            transposta.m[i][j] = this->m[j][i];
        }
    }

    return transposta;
}

// imprime o conteudo da matriz
void Matrix::print() const {
    cout << "Numero de linhas: " << this->nRows << endl;
    cout << "Numero de colunas: " << this->nCols << endl;
    cout << "Matriz: " << endl;

    for(int i = 0; i < this->nRows; i++){
        for(int j = 0; j < this->nCols; j++){
            cout << "[" << this->m[i][j] << "] ";
        }
        cout << endl;
    }
}