#ifndef Carro_hpp
#define Carro_hpp

class Carro {
    public:
        virtual void abastecer(int litros) = 0;
        virtual ~Carro() = default;
};

#endif