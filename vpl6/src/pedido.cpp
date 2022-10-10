// TODO implemente essa classe de acordo com o hpp correspondente
// funcao a revisar 

#include "include/pedido.hpp"
#include "include/cachorro_quente.hpp"
#include "include/produto.hpp"

Pedido::Pedido(std::list<Produto*> produtos,
std::list<Acai*> Acai,
std::list<CachorroQuente*>Cachorro,
std::list<Pizza*>Pizza):
_Produtos(produtos),_Acai(Acai),_Cachorro(Cachorro),
_Pizza(Pizza){}

//a revisar
void Pedido::adicionaProduto(Produto* p){
    _Produtos.push_back(p);
}

// a revisar
float Pedido::calculaTotal() const{
    float preco=1;
    for (int i= 0 ; i < _Produtos.size();i++){
        preco++;
    }
    return preco;
}
// a revisar
std::string Pedido::resumo() const{
    std::string Resumo;
    if(!_Produtos.empty()){
        for(int i=0;i<_Produtos.size();i++){
            
        }
    }
}



    
