#ifndef TANQUE_HPP
#define TANQUE_HPP

class Tanque {
private:
    int limite;  // Capacidade máxima do tanque
    int atual;   // Valor atual do tanque
    
public:
    Tanque(){}

    Tanque(int limite) : limite(limite), atual(0) {}

    void Completar() {
        atual = limite; // Completa o tanque até o limite
    }

    int getAtual() const {
        return atual; // Retorna o valor atual do tanque
    }


};

#endif