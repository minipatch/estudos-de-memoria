#include "pizza.hpp"

Pizza::Pizza(float valor,const std::string &sabor,int pedacos, bool borda_recheada,int qtd,std::string descricao): _sabor(sabor), _pedacos(pedacos),_borda_recheada(borda_recheada){
    this->_valor_unitario=valor;
    this->_quantidade=qtd;
    this->_descricao=descricao;
}


float Pizza::calcPreco(){

    std::string especial="especial";
    int variavel=_sabor.find(especial);
    for(int i=0;i<_pedacos;i++){
        _valor_unitario=+5.00;
    }
    if(_borda_recheada==true){
        _valor_unitario=+10.00;
    }
    if(variavel!=std::string::npos){
        _valor_unitario=+8.00;
    }
    return _valor_unitario;
}

std::string Pizza::descricao() const{
    std::string desc;
    if(_borda_recheada==true){        
        desc = std::to_string(_quantidade) +"X pizza" + _sabor+", " + std::to_string(_pedacos)+" borda recheada";
    }
    else{
        desc = std::to_string(_quantidade) +"X pizza" + _sabor+", " + std::to_string(_pedacos)+" sem bordarecheada";
    }
    return  desc;
}