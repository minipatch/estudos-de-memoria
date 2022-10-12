// TODO implemente essa classe de acordo com o hpp correspondente
#include "acai.hpp"

Acai::Acai(int tamanho,std::vector<std::string>& complementos,int qtd,float valor) : _tamanho(tamanho), _complementos(complementos){
    this->_quantidade=qtd;
    this->_valor_unitario=valor;
}

float Acai::calcPreco(){
    for(int i=0;i<_quantidade;i++){
        _valor_unitario=+00.2;
    }

    for(int i=0;i<_complementos.size();i++){
        _valor_unitario=+2.00;
    }

    return _valor_unitario;
}


std::string Acai::descricao() const{
    std::string desc;
    desc = std::to_string(_quantidade) + "X açai" + std::to_string(_tamanho);
    for(int i=0;i<_complementos.size();i++){
        desc += ", " + _complementos[i];
    }
    
    return desc;
}



