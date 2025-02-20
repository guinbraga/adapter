#ifndef CARRO_ELETRICO_HPP
#define CARRO_ELETRICO_HPP

#include "Carro.hpp"
#include "Bateria.hpp"

class CarroEletrico : public Carro {
public:
    CarroEletrico(int capacidadeBateria) : Carro(capacidadeBateria), bateria(capacidadeBateria){}

    void abastecer() override {
        bateria.carregar_total();
    }    
    
private:
    Bateria bateria;
};

#endif
