#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double _taxa_juros;
        
    public:
        ContaPoupanca(std::string titular, double saldo, double taxa_juros);
        void calcular_juros();
};


#endif