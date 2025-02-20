#include "Carro.hpp"
#include <iostream>
using namespace std;


int main(){
    Carro* carros = new Carro[2];
    Carro corsa(100), fusca(100);
    carros[0] = corsa;
    carros[1] = fusca;
    
    // posto de gasolina;
    for (int i = 0; i<2; i++){
        cout << "Nível de combustível do carro: " << carros[i].tanque.getAtual() << endl;
        if (carros[i].tanque.getAtual() < 50) carros[i].abastecer();
        cout << "Nível de combustível após abastecer: " << carros[i].tanque.getAtual() << endl; 
    }

}
