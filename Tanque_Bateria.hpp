#ifndef TANQUE_HPP
#define TANQUE_HPP
#include <iostream>
using namespace std;

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

class Bateria {
private:
    int wat;      // Capacidade máxima da bateria (em watts)
    int atual_w;  // Valor atual da bateria
    
public:
    Bateria(int wat) : wat(wat), atual_w(0) {}

    void carregar_total() {
        std::cout << "Bateria está sendo carregada!" << std::endl;
        atual_w = wat; // Carrega a bateria até o máximo
    }

    int getAtualW() const {
        return atual_w; // Retorna o valor atual da bateria
    }


};


