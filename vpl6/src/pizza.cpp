// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/pizza.hpp"


Pizza::Pizza(const std::string& sabor,
        int pedacos,
        bool borda_recheada,
        int qtd): _sabor(sabor),_pedacos(pedacos),
        _borda_recheada(borda_recheada),
        _qtd(qtd){}

int Pizza::getPedacos(){
    return _pedacos;
}

bool Pizza::getBorda(){
    return _borda_recheada;
}

std::string Pizza::getSabor(){
    return _sabor;
}

float Pizza::calcPreco(){
    float valor;
    if(_pedacos>0){
        for(int i=0;i<getPedacos();i++){
            valor=+5.00;
        }
    }
    
    if(getBorda()==true){
        valor=+10.00;
    }

    if(getSabor()=="especial"){
        valor=+8.00;
    }
    
    for(int i=0;i<_qtd;i++){
        valor=valor*i;
    }
    return valor;
}

std::string Pizza::descricao() const{
    std::string descricao;
}


    