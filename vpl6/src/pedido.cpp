// TODO implemente essa classe de acordo com o hpp correspondente
// funcao a revisar 

#include "include/pedido.hpp"
#include "include/cachorro_quente.hpp"
#include "include/produto.hpp"

Pedido::Pedido(std::list<Produto* > produtos,
std::list<Acai*> Acai,
std::list<CachorroQuente*> Cachorro, 
std::list<Pizza*> Pizza) : _Produtos(produtos),
_Acai(Acai), _Cachorro(Cachorro), _Pizza(Pizza){}

Pedido::~Pedido(){}

void Pedido::adicionaProduto(Produto* p){

}

