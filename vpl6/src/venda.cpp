#include "venda.hpp"

Venda::Venda(std::list<Pedido*> pedidos): _pedidos(pedidos){}


void Venda::adicionaPedido(Pedido* p){
    _pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const{
    //_pedidos.descricao();
}