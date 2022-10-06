// TODO implemente essa classe de acordo com o hpp correspondente
#include "include/produto.hpp"
#include "include/acai.hpp"


Acai::Acai(int tamanho,
       std::vector<std::string>& complementos,
       int qtd): _tamanho(tamanho),_complementos(complementos),_quantidade(qtd){}

int Acai::getTamanho(){
    return _tamanho;
}


float Acai::calcPreco(){
    float preco;
    for(int i=0 ; i<getTamanho() ; i++){
        preco =+ 0.02;
    }
    for(int i=0 ; i<_complementos.size() ; i++){
        preco =+ 2;
    }
    return preco;
}

//terminar essa funcao
std::string descricao(){
    std::string detalhe;
    return detalhe;

}
