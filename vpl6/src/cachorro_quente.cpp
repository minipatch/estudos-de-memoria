// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/produto.hpp"
#include "include/cachorro_quente.hpp"

CachorroQuente::CachorroQuente(int num_salsichas,
    std::vector<std::string>& complementos,
    bool prensado, int qtd):
    _num_salsichas(num_salsichas),_complementos(complementos),_prensado(prensado),_qtd(qtd){}

int CachorroQuente::GetSalsichas(){
    return _num_salsichas;
}

float CachorroQuente::calcPreco(){
    float preco=5;
    
    for(int i=0;i<GetSalsichas();i++){
        preco=+1.50;
    }
    
    for(int i=0;i<_complementos.size();i++){
        preco=+1.00;
    }
    
    if(GetPrensado() == true){
        preco=+0.50;
    }else{
        preco;
    }
    return preco;
}

std::string descricao(){
    std::string Descricao;
}