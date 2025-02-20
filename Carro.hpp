#ifndef CARRO_HPP
#define CARRO_HPP

#include "Tanque.hpp"

class Carro {
public:
    Tanque tanque;

    Carro() {}
    Carro(int limiteTanque) : tanque(limiteTanque) {}

    virtual void abastecer() {
        tanque.Completar();
    }

    virtual int getNivelCombustivel() {
        return tanque.getAtual();
    }

    virtual ~Carro() = default;
};

#endif