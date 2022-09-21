#include "geladeira.hpp"

Geladeira::Geladeira(){
    capacidade_em_litros=0;
    numeros_de_portas=0;
}

int Geladeira::getCapacidade_em_litros(){
    return capacidade_em_litros;
}

int Geladeira::getNumeros_de_portas(){
    return numeros_de_portas;

}
// Adicione seus metodos / construtores aqui