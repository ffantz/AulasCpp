#include <iostream>
#include "point2d.h"

using namespace std;

int main() {
    srand((unsigned) time(0)); // utilizar uma vez

    Point2d::ids = vector<int>();
    Point2d p1(7.0, -2.0);
    p1.print();
    cout << endl;

    Point2d p2(3.0, 4.0);
    p2.print();
    cout << endl;

    // p1.distToOrig();

    double d = p1.distToOrig();
    cout << "Distancia ate a origem: " << d << endl;

    d = p1.distTo(p2);
    cout << "Distancia entre p1 e p2: " << d << endl;
    cout << endl;

    // p1.sumOf(p2);
    // p2.print();
    // cout << endl;

    Point2d p3 = p1.sumOf(p2);
    p3.print();

    // Metodos sobrecarregados
    // Point2d p3;
    // p3.sumOf(p1, p2);
    // p3.print();

    // Caso forcando o destructor
    // Point2d *p2 = new Point2d(3.0, 4.0);
    // (*p2).print();
    // delete p2;

    // Casos forcando reutilizacao de ids
    // Point2d p3(3.0, 4.0);
    // Point2d p4(3.0, 4.0);
    // Point2d p5(3.0, 4.0);
    // p3.print();
    // p4.print();
    // p5.print();

    // Point2d p6(3.0, 4.0);
    // p6.print();

    return 0;
}