#include "fogao.hpp"


Fogao::Fogao(int numero_de_queimadores, int capacidade_forno) 
: numero_de_queimadores(numero_de_queimadores), capacidade_forno(capacidade_forno) {}

int Fogao::getNumero_de_queimadores(){
    return numero_de_queimadores;
}
int Fogao::getCapacidade_forno(){
    return capacidade_forno;
}

void Fogao::setCapacidade_forno(int ncapacidade_forno){
    capacidade_forno=ncapacidade_forno;
}

void Fogao::setNumero_dequeimadores(int nqueimadores){
    numero_de_queimadores=nqueimadores;
}
// Adicione seus metodos / construtores aqui