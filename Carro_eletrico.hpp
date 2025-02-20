#ifndef CarroEletrico_hpp
#define CarroEletrico_hpp

#include "Carro.hpp"

class CarroEletrico : public Carro {
public:
    void carregar(int kwh); // Método específico para carregar o carro elétrico
    void abastecer(int litros) override{
        
    }; // Override colocado para sobrepor
};

#endif
