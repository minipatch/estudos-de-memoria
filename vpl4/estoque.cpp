#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque(){
    indice_fogao=0;
    indice_geladeira=0;
}

void Estoque::armazena_geladeira(int capacidade, int portas){
    if(!geladeiras.empty()){
        for(int i=0;i<geladeiras.size();i++){
          geladeiras[i].setCapacidade_em_litros(capacidade);
        }
        for(int i=0;i<geladeiras.size();i++){
          geladeiras[i].setNumero_de_portas(portas);
        }
    }
}

void Estoque::vende_geladeira(int capacidade, int portas){
    if(!geladeiras.empty()){
        geladeiras.pop_back();
    }
}

void Estoque::armazena_fogao(int queimadores, int capacidade){
    if(!fogoes.empty()){
        for(int i=0;i<fogoes.size();i++){
            fogoes[i].setCapacidade_forno(capacidade);
        }
        for(int i=0;i<fogoes.size();i++){
            fogoes[i].setNumero_dequeimadores(queimadores);
        }
    }
}

void Estoque::vende_fogao(int queimadores, int capacidade){
    if(!fogoes.empty()){
        fogoes.pop_back();
    }
}

void Estoque::exibe_geladeiras(){
    for(int i=0;i<=geladeiras.size();i++){
        std::cout<<geladeiras[i].getCapacidade_em_litros()<<std::endl;
        std::cout<<geladeiras[i].getNumeros_de_portas()<<std::endl;
    }
}

void Estoque::exibe_fogoes(){
    for(int i=0;i<=fogoes.size();i++){
        std::cout<<fogoes[i].getCapacidade_forno()<<std::endl;
        std::cout<<fogoes[i].getNumero_de_queimadores()<<std::endl;
    }
}

int Estoque::quantidade_geladeiras(){
    return geladeiras.size();
}

int Estoque::quantidade_fogoes(){
    
    return fogoes.size();
}