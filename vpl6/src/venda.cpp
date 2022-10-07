// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/venda.hpp"

Venda::Venda(std::list<Pedido*> pedidos){
    this->_pedidos=pedidos;
}

void Venda::adicionaPedido(Pedido* p){
    _pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const{
    
    
    // std::cout<< <<std::endl;
}
