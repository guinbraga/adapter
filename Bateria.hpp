#ifndef BATERIA_HPP
#define BATERIA_HPP

class Bateria {
private:
    int wat;      // Capacidade máxima da bateria (em watts)
    int atual_w;  // Valor atual da bateria
    
public:
    Bateria(int wat) : wat(wat), atual_w(0) {}

    void carregar_total() {
        atual_w = wat; // Carrega a bateria até o máximo
    }

    int getAtualW() const {
        return atual_w; // Retorna o valor atual da bateria
    }


};

#endif