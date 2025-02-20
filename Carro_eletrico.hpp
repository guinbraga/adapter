#ifndef CARRO_ELETRICO_HPP
#define CARRO_ELETRICO_HPP

#include "Carro.hpp"
#include "Tanque_Bateria.hpp"

class CarroEletrico : public Carro {
public:
    Bateria bateria;

    CarroEletrico(int capacidadeBateria) : Carro(0), bateria(capacidadeBateria) {}

    void abastecer() override {
        bateria.carregar_total();
    }

    int getNivelCombustivel() {
        return bateria.getAtualW();
    }
};

#endif