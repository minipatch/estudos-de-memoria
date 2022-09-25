#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>

class Geladeira {
    private:
    // Adicione suas variaveis globais aqui
    int capacidade_em_litros;
    int numeros_de_portas;

    public:
    // Adicione a assinatura dos seus metodos / construtores aqui
    Geladeira();

    int getCapacidade_em_litros();
    int getNumeros_de_portas();
    void setCapacidade_em_litros(int ncapacidade);
    void setNumero_de_portas(int nportas);
};

#endif