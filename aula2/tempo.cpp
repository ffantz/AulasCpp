#include "tempo.h"
#include <iostream>

Tempo::Tempo() {
    this->dia = 0;
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
}

Tempo::Tempo(int dia, int hora, int minuto, int segundo) {
    this->dia = dia;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
    this->checarConsistencia();
}

// destrutor
Tempo::~Tempo() {
    // delete this;
}

int Tempo::getDia() const {
    return this->dia;
}

int Tempo::getHora() const {
    return this->hora;
}

int Tempo::getMinuto() const {
    return this->minuto;
}

int Tempo::getSegundo() const {
    return this->segundo;
}

void Tempo::setDia(int valor) {
    this->dia = valor;
    this->checarConsistencia();
}

void Tempo::setHora(int valor) {
    this->hora = valor;
    this->checarConsistencia();
}

void Tempo::setMinuto(int valor) {
    this->minuto = valor;
    this->checarConsistencia();
}

void Tempo::setSegundo(int valor) {
    this->segundo = valor;
    this->checarConsistencia();
}

void Tempo::checarConsistencia() {
    int aux = 0;
    if (this->segundo >= 60 && this->segundo / 60 > 0) {
        aux = this->segundo / 60;
        this->minuto += aux;
        this->segundo -= (60 * aux);
    }

    if (this->segundo > 60 && this->segundo % 60 > 0) {
        this->segundo = this->segundo - 60;
        this->minuto++;
    } else if (this->segundo == 60) {
        this->segundo = 0;
        this->minuto++;
    }

    aux = 0;
    if (this->minuto >= 60 && this->minuto / 60 > 0) {
        aux = this->minuto / 60;
        this->hora += aux;
        this->minuto -= (60 * aux);
    }

    if (this->minuto > 60 && this->minuto % 60 > 0) {
        this->minuto = this->minuto - 60;
        this->hora++;
    } else if (this->minuto == 60) {
        this->minuto = 0;
        this->hora++;
    }

    aux = 0;
    if (this->hora >= 24 && this->hora / 24 > 0) {
        aux = this->hora / 24;
        this->dia += aux;
        this->hora -= (24 * aux);
    }
    if (this->hora > 24 && this->hora % 24 > 0) {
        this->hora = this->hora - 24;
        this->dia++;
    } else if (this->hora == 24) {
        this->hora = 0;
        this->dia++;
    }
}

Tempo Tempo::somarTempos(Tempo a, Tempo b) {
    a.dia += b.dia;
    a.hora += b.hora;
    a.minuto += b.minuto;
    a.segundo += b.segundo;
    a.checarConsistencia();
    return a;
}

Tempo Tempo::incrementaSegundo(Tempo a) {
    a.segundo++;
    a.checarConsistencia();
    return a;
}

void Tempo::print() const {
    std::cout << "Informacoes:" << std::endl;
    std::cout << "Dias: " << this->dia << std::endl;
    std::cout << "Horas: " << this->hora << std::endl;
    std::cout << "Minutos: " << this->minuto << std::endl;
    std::cout << "Segundos: " << this->segundo << std::endl;
}