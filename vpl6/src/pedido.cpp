// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/pedido.hpp"
#include "include/cachorro_quente.hpp"


Pedido::Pedido(std::list<Produto*> produtos,
std::list<Acai*> Acai,
std::list<CachorroQuente*>Cachorro,
std::list<Pizza*>Pizza):
_Produtos(produtos),_Acai(Acai),_Cachorro(Cachorro),
_Pizza(Pizza){}

//incompleto 
void Pedido::adicionaProduto(Produto* p){
    _Produtos.push_back(p);

}

float Pedido::calculaTotal() const{
    float valor_total=0;
    for(int i=0;i<_Produtos.size();i++){
        valor_total=+i;
    }
}

std::string Pedido::resumo() const{
    
}