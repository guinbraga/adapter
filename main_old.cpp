#include "Carro.hpp"
#include <iostream>
using namespace std;


int main(){
    Carro* carros[2];
    carros[0] = new Carro(100);
    carros[1] = new Carro(100); 
    
    // posto de gasolina;
    for (int i = 0; i < 2; i++) {
        cout << "Nivel de combustivel atual: " << carros[i]->getNivelCombustivel() << endl;
        if (carros[i]->getNivelCombustivel() < 50) carros[i]->abastecer();
        cout << "Nivel de combustivel após abastecer: " << carros[i]->getNivelCombustivel() << endl << endl;
    } 

}
