// TODO implemente essa classe de acordo com o hpp correspondente
#include "produto.hpp"

Produto::Produto(int quantidade, float valor_unitario,std::string descricao):
  _quantidade(quantidade), _valor_unitario(valor_unitario),_descricao(descricao) {}

int Produto::getQtd() const{
    return _quantidade;
}

float Produto::getValor() const{
    return _valor_unitario;
}

std::string Produto::descricao() const{
    return _descricao;
}


float Produto::calcPreco(){
    return _valor_unitario;

}

