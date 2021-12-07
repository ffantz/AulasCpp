#include <iostream>
#include "tempo.h"

using namespace std;

int main() {
    // Tempo tempo;
    // tempo.print();
    // cout << endl;
    // Tempo tempo1(72);
    // tempo1.print();
    // cout << endl;
    // Tempo tempo2(90, 24);
    // tempo2.print();
    // cout << endl;
    Tempo tempo3(4, 5, 55, 122);
    tempo3.print();
    cout << endl;

    // tempo3 = tempo3.incrementaSegundo(tempo3);
    // tempo3.print();
    // cout << endl;

    // tempo3.setDia(30);
    // tempo3.print();
    // cout << endl;

    tempo3.setHora(48);
    tempo3.print();
    cout << endl;

    // Tempo tempo4(45, 30, 56, 65);
    // tempo4.print();
    // cout << endl;

    // tempo4 = tempo4.somarTempos(tempo4, tempo3);
    // tempo4.print();
    // cout << endl;
    return 0;
}