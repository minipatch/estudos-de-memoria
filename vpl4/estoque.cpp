#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque(){
    indice_fogao=0;
    indice_geladeira=0;
}

void Estoque::armazena_geladeira(int capacidade, int portas){
    if(!geladeiras.empty()){
        for(auto it:geladeiras){
          // geladeiras.push_back().getCapacidade_em_litros() = capacidade;
        }
        for(auto it:geladeiras){
          //  geladeiras->getNumeros_de_portas() = portas;
        }
    }
}

void Estoque::vende_geladeira(int capacidade, int portas){
    if(!geladeiras.empty()){
        geladeiras.pop_back();
    }
}

void Estoque::armazena_fogao(int queimadores, int capacidade){/*TODO*/}

void Estoque::vende_fogao(int queimadores, int capacidade){
    if(!fogoes.empty()){
        fogoes.pop_back();
    }
}

void Estoque::exibe_geladeiras(){
    for(int i=0;i<=geladeiras.size();i++){
        std::cout<<geladeiras[i]<<std::endl;
    }
}

void Estoque::exibe_fogoes(){
    for(int i=0;i<=geladeiras.size();i++){
        std::cout<<fogoes[i]<<std::endl;
    }
}

int Estoque::quantidade_geladeiras(){
    std::cout<<geladeiras.size()<<std::endl;
}

int Estoque::quantidade_fogoes(){
    std::cout<<fogoes.size()<<std::endl;
}