#include "tempo.h"
#include <iostream>

Tempo::Tempo(int dias, int horas = 0, int minutos = 0, int segundos = 0) {}

// destrutor
Tempo::~Tempo() {
    delete this;
}

int Tempo::getDias() const {
    return this->dias;
}

int Tempo::getHoras() const {
    return this->horas;
}

int Tempo::getMinutos() const {
    return this->minutos;
}

int Tempo::getSegundos() const {
    return this->segundos;
}

void Tempo::setDias(int valor) {
    this->dias = valor;
}

void Tempo::setHoras(int valor) {
    this->horas = valor;
}

void Tempo::setMinutos(int valor) {
    this->minutos = valor;
}

void Tempo::setSegundos(int valor) {
    this->segundos = valor;
}

void Tempo::checarConsistencia() {}

Tempo Tempo::somarTempos(Tempo a, Tempo b) {
    return a;
}

void Tempo::print() const {}