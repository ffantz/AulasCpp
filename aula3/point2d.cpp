#include "point2d.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>

Point2d::Point2d() {
    this->x = 0;
    this->y = 0;
    this->getNextId();
}

Point2d::Point2d(double x, double y) {
    this->x = x;
    this->y = y;
    this->getNextId();
}

// destrutor
Point2d::~Point2d() {
    // std::cout << "destrutor " << std::endl;
    for(int i = 0; i < Point2d::ids.size(); i++) {
        if (Point2d::ids.at(i) == this->id) {
            Point2d::ids.erase(Point2d::ids.begin() + i);
        }
    }
}

std::vector<int> Point2d::ids;

double Point2d::getX() const {
    return this->x;
}

double Point2d::getY() const {
    return this->y;
}

double Point2d::getId() const {
    return this->id;
}

void Point2d::setX(double valor) {
    this->x = valor;
}

void Point2d::setY(double valor) {
    this->y = valor;
}

void Point2d::imprimeIds() {
    for(int i = 0; i < Point2d::ids.size(); i++) {
        std::cout << "posicao " << i << " - " << Point2d::ids.at(i) << "; ";
    }
    std::cout << std::endl;
}

double Point2d::distToOrig() {
    double hipo;
    hipo = sqrt(pow(this->x, 2) + pow(this->y, 2));
    return hipo;
}

double Point2d::distTo(Point2d p2) {
    double hipo, absX, absY = 0;
    absX = abs(this->getX() - p2.getX());
    absY = abs(this->getY() - p2.getY());
    hipo = sqrt(pow(absX, 2) + pow(absY, 2));
    return hipo;
}

// void Point2d::sumOf(Point2d p2) {
//     this->x = this->x + p2.getX();
//     this->y = this->y + p2.getY();
// }

// void Point2d::sumOf(Point2d p1, Point2d p2) {
//     this->x = p1.getX() + p2.getX();
//     this->y = p1.getY() + p2.getY();
// }

Point2d Point2d::sumOf(Point2d p2) {
    Point2d pAux;
    pAux.setX(this->x + p2.getX());
    pAux.setY(this->y + p2.getY());
    return pAux;
}

void Point2d::getNextId() {
    int i = 0;
    int randomId = 0;
    bool valorRepetido = false;

    // do {
    //     randomId = (rand() % 1001);
    //     valorRepetido = false;
    //     for(i = 0; i < Point2d::ids.size(); i++) {
    //         if (Point2d::ids.at(i) == randomId) {
    //             valorRepetido = true;
    //             break;
    //         }
    //     }
    // } while(valorRepetido);

    do {
        randomId = (rand() % 1001);
    } while (std::find(Point2d::ids.begin(), Point2d::ids.end(), randomId) != Point2d::ids.end());

    Point2d::ids.push_back(randomId);
    this->id = randomId;
    // this->imprimeIds();
}

void Point2d::print() const {
    std::cout << "Identificador: " << this->id << std::endl;
    std::cout << "Coordenadas: ";
    std::cout << "(" << this->x;
    std::cout << ", " << this->y;
    std::cout << ")" << std::endl;
}