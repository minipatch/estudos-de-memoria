#include "fogao.hpp"


Fogao::Fogao(){
    numero_de_queimadores=0;
    capacidade_forno=0;
}

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