#include <iostream>
#include "Multiconjunto.h"
#include "Persona.h"

using namespace std;

int main() {
    Multiconjunto<Persona> mc;

    Persona p1("Laura", 20);
    Persona p2("Ana", 22);
    Persona p3("Laura", 20); // igual que p1

    cout << "¿Vacío? " << (mc.esVacio() ? "Sí" : "No") << endl;

    mc.anade(p1);
    mc.anade(p2);
    mc.anade(p3); // repetido, se permite

    cout << "Cardinalidad: " << mc.cardinalidad() << endl;
    cout << "¿Pertenece Laura/20? " << (mc.pertenece(p1) ? "Sí" : "No") << endl;

    mc.elimina(p1); // elimina todas las ocurrencias de Laura/20
    cout << "Cardinalidad tras eliminar Laura/20: " << mc.cardinalidad() << endl;

    return 0;
}
