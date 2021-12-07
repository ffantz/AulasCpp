#include <iostream>
#include "tempo.h"

using namespace std;

int main() {
    Tempo tempo;
    tempo.print();
    cout << endl;
    Tempo tempo1(72);
    tempo1.print();
    cout << endl;
    Tempo tempo2(90, 24);
    tempo2.print();
    cout << endl;
    Tempo tempo3(4, 7, 55);
    tempo3.print();
    cout << endl;
    Tempo tempo4(45, 30, 56, 65);
    tempo4.print();
    cout << endl;
    return 0;
}