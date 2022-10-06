// TODO implemente essa classe de acordo com o hpp correspondente
#include <iostream>
#include "include/produto.hpp"

Produto::Produto(){
    this->_quantidade=0;
    this->_valor_unitario=0;
}

Produto::Produto(int qtdprod, float preco, std::string valor){
    this->_quantidade=qtdprod;
    this->_valor_unitario=preco;
}

int Produto::getQtd()const{
    return _quantidade;
}

float Produto::getValor()const{
    return _valor_unitario;
}

std::string Produto::descricao()const {
    std::string descricao_do_produto;
    return descricao_do_produto;
}

float Produto::calcPreco(){
    float soma;
    for(int i=0;i<getQtd();i++){
        soma=+_valor_unitario;
    }
    return soma;
}

Produto::~Produto(){}


