// TODO implemente essa classe de acordo com o hpp correspondente
#include "pedido.hpp"

Pedido::Pedido(std::list<Produto*> produtos,std::list<CachorroQuente*> cachorro,
    std::list<Acai*> acai,std::list<Pizza*> pizza,const std::string& endereco):_produtos(produtos),_acai(acai),_cachorro(cachorro)
    ,_pizza(pizza),_endereco(endereco){}


Pedido::~Pedido(){
    _produtos.pop_back();
}

void Pedido::adicionaProduto(Produto* p){
    _produtos.push_back(p);
}


//a preciso de um help
float Pedido::calculaTotal() const{
    for(int i=0;i<_produtos.size();i++){
        //_valor_unitario;
    }
}

void Pedido::setEndereco(const std::string& endereco){
    _endereco=endereco;    
}
