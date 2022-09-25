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

void Geladeira::setCapacidade_em_litros(int ncapacidade){
    capacidade_em_litros=ncapacidade;
}

void Geladeira::setNumero_de_portas(int nportas){
    numeros_de_portas=nportas;
}
// Adicione seus metodos / construtores aqui