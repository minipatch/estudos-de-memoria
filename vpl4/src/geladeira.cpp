#include "geladeira.hpp"

Geladeira::Geladeira(int capacidade_em_litros, int numeros_de_portas) 
: capacidade_em_litros(capacidade_em_litros), numeros_de_portas(numeros_de_portas) {}

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