#include "Servidor.h"


SimCity& Servidor::at(Jugador j1) {
    return _trie.at(j1);
}

const SimCity& Servidor::at(Jugador j1) const {
    return _trie.at(j1);
}

Servidor::Servidor() : _trie() {};

void Servidor::registrar(Jugador j, set<int> verticales, set<int> horizontales) {
    pair<string, SimCity> p = make_pair(j, SimCity(Mapa(verticales, horizontales)));
    _trie.insert(p);
}

void Servidor::avanzarTurno(Jugador j) {
    _trie.at(j).avanzarTurno();
}

void Servidor::agregarCasa(Jugador j, Casilla p) {
    _trie.at(j).agregarCasa(p);
}

void Servidor::agregarComercio(Jugador j, Casilla p) {
    _trie.at(j).agregarComercio(p);
}

void Servidor::unir(Jugador j1, Jugador j2) {
    _trie.at(j1).unir(_trie.at(j2));
}

