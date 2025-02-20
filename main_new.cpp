#include "Carro_eletrico.hpp"
#include <iostream>
using namespace std;

int main(){
    Carro* carros = new Carro[2];
    Carro corsa(100);
    CarroEletrico byd(100);
    carros[0] = corsa;
    carros[1] = byd;

    for (int i = 0; i<2; i++){
        cout << "Nivel do combustivel atual: " << carros[i].tanque.getAtual() << endl;
        if (carros[i].tanque.getAtual() < 50) carros[i].abastecer();
        cout << "Nível do combustível após abastecer: " << carros[i].tanque.getAtual() << endl;
    }

}
