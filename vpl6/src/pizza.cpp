#include "pizza.hpp"

Pizza::Pizza(float valor,const std::string &sabor,int pedacos, bool borda_recheada,int qtd,std::string descricao): _sabor(sabor), _pedacos(pedacos),_borda_recheada(borda_recheada){
    this->_valor_unitario=valor;
    this->_quantidade=qtd;
    this->_descricao=descricao;
}


float Pizza::calcPreco(){
    for(int i=0;i<_pedacos;i++){
        _valor_unitario=+5.00;
    }
    if(_borda_recheada==true){
        _valor_unitario=+10.00;
    }
    if(_sabor == "especial"){
        _valor_unitario=+8.00;
    }
}

std::string Pizza::descricao() const{
    return _descricao;
}