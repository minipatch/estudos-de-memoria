// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/venda.hpp"

Venda::Venda(std::list<Pedido*> pedidos) : _pedidos(pedidos){}


void Venda::adicionaPedido(Pedido* p){
    _pedidos.push_back(p);
}

//a fazer a função imprimir relatorioq
void Venda::imprimeRelatorio() const{
    
}

