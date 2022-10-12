// TODO implemente essa classe de acordo com o hpp correspondente
#include "cachorro_quente.hpp"

CachorroQuente::CachorroQuente(int num_salsichas, std::vector<std::string>& complementos,bool prensando,int qtd,float valor,std::string descricao) : _num_salsichas(num_salsichas), _complementos(complementos), _prensando(prensando){
    this->_quantidade=qtd;
    this->_valor_unitario=valor;
    this->_descricao=descricao;
}

float CachorroQuente::calcPreco(){
    _valor_unitario=5.00;
    
    for(int i=0;i<_num_salsichas;i++){
        _valor_unitario=+1.50;
    }
    
    if(!_complementos.empty()){
        for(int i=0;i<_complementos.size();i++){
            _valor_unitario=+1.00;
        }
    }

    if(_prensando==true){
        _valor_unitario=+0.50;
    }

    return _valor_unitario;
}


std::string CachorroQuente::descricao() const{
    std::string desc;
    if(_prensando!=true){
        desc ="cachorro quente com " +std::to_string(_num_salsichas)+" salsichas";
    }
    if(_prensando==true){
        desc = "cachorro quente prenssado com " + std::to_string(_num_salsichas)+" salsichas";
    }

    for(int i=0;i<_complementos.size();i++){
        desc =+ " ," + _complementos[i];   
    }
}