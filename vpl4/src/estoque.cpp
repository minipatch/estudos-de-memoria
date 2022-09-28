#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque(){
}

void Estoque::armazena_geladeira(int capacidade, int portas){
    geladeiras.push_back(Geladeira(capacidade,portas));
}

void Estoque::vende_geladeira(int capacidade, int portas){
    if(!geladeiras.empty()){
        for(std::vector<Geladeira>::iterator itr = geladeiras.begin(); itr != geladeiras.end(); ++itr){
            if(itr->getCapacidade_em_litros() == capacidade && itr->getNumeros_de_portas() == portas){
                geladeiras.erase(itr);
                break;
            }
        }
    }
}

void Estoque::armazena_fogao(int queimadores, int capacidade){
    fogoes.push_back(Fogao(queimadores,capacidade));
}

void Estoque::vende_fogao(int queimadores, int capacidade){
    if(!fogoes.empty()){
        for(std::vector<Fogao>::iterator itr = fogoes.begin(); itr != fogoes.end(); ++itr){
            if(itr->getCapacidade_forno() == capacidade && itr->getNumero_de_queimadores() == queimadores){
                fogoes.erase(itr);
                break;
            }
        }
    }
}

void Estoque::exibe_geladeiras(){
    for(int i=0;i<geladeiras.size();i++){
        std::cout<<"G "; 
        std::cout<<geladeiras[i].getCapacidade_em_litros()<< " ";
        std::cout<<geladeiras[i].getNumeros_de_portas()<<std::endl;
    }
}

void Estoque::exibe_fogoes(){
    for(int i=0;i<fogoes.size();i++){
        std::cout<<"F "; 
        std::cout<<fogoes[i].getCapacidade_forno()<< " ";
        std::cout<<fogoes[i].getNumero_de_queimadores()<<std::endl;
    }
}

int Estoque::quantidade_geladeiras(){
    return geladeiras.size();
}

int Estoque::quantidade_fogoes(){
    
    return fogoes.size();
}