#include "Mapa.h"

Mapa::Mapa(set<int> verticales, set<int> horizontales) : _verticales(verticales), _horizontales(horizontales) {}


bool Mapa::hayRio(Casilla pos) {
    return _verticales.count(pos.first) == 1 or _horizontales.count(pos.second) == 1;
}

void Mapa::unirMapa(const Mapa& m2) {
    // La función insert se ocupa de no insertar duplicados
    for (int r : m2._verticales) {
        this->_verticales.insert(r);
    }
    for (int r : m2._horizontales) {
        this->_horizontales.insert(r);
    }
}

set<int> Mapa::verticales() {
    return _verticales;
}

set<int> Mapa::horizontales() {
    return _horizontales;
}
